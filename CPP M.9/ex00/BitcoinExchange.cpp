/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:33:51 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/25 12:09:34 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdio>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

int date_error_and_printing(std::string& date)
{
    std::istringstream iss(date);
    int year = 0;
    int month = 0;
    int day = 0;
    char sep1=0;
    char sep2=0;
    try {
        if(!(iss>>year>>sep1>>month>>sep2>>day))
            throw std::runtime_error(date);
        if(date.find(" ") != date.size() - 1 || sep1 != '-' || sep2 != '-')
            throw std::runtime_error(date);
        if((month > 0 && month < 13) && (day > 0 && day <= 31) && (year >= 2009 && year < 2023))
        {
            if(year == 2009 && month == 1 && day < 2)
                throw std::runtime_error(date);
            if(year == 2022 && ((month == 3 && day > 29) || month > 3))
                throw std::runtime_error(date);
            if(!(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
            {
                if(month == 2)
                {
                    if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && day > 29)
                        throw std::runtime_error(date);
                    if (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && day > 28)
                        throw std::runtime_error(date);
                }
                else if(day == 31)
                    throw std::runtime_error(date);
            }
            return(0);
        }
        else
            throw std::runtime_error(date);
    } catch (std::exception& e) {
        std::cout<<"Error: bad input"<< " => "<< e.what()<<std::endl;
        return 1;
    }
    return (0);
}
void BitcoinExchange::value_error_and_printing(std::string& date,std::string& value)
{
    try {
        float  v;
        int spc = 0;
        std::istringstream iss(value);
        
        for(int i = 0; value[i] ;i++)
        {
            if(value[i] == ' ')
                spc++;
        }
        if (spc == 1 && value.find(' ') == 0) 
        {
            if(iss>>v)
            {
                if(v >= 1000)
                    throw std::runtime_error("Error: too large a number.");
                else if (v < 0)
                    throw std::runtime_error("Error: not a positive number.");
                else
                {
                    std::map<std::string, float>::iterator it = exchange.end();
                    it--;
                    for (; it != exchange.begin(); --it) 
                    {
                        if (date >= it->first)
                        {
                            std::cout<< date<< " => "<<v<<" = "<<it->second * v<<std::endl;
                            break;
                        }
                    }
                    if (it == exchange.begin() && date >= it->first)
                        std::cout << date << " => " << v << " = " << it->second * v << std::endl;
                }
            }
            else
                throw std::runtime_error("Error: is not a number.");
        }
        else {
            throw std::runtime_error("Error: syntax.");
        }
    } catch (std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
}

void BitcoinExchange::check_err(std::string& line)
{
    std::istringstream iss(line);
    std::string date;
    std::string value;
    std::getline(iss, date,  '|');
    std::getline(iss, value);
    if(!date_error_and_printing(date))
        value_error_and_printing(date,value);
}

BitcoinExchange::BitcoinExchange(std::ifstream& input)
{
    int index = 0;
    fill_db();
    std::string line;
    while (std::getline(input, line)) 
    {
        if (index == 0 && line!="date | value") 
            throw std::runtime_error("should the file begin by : date | value , copy it and past it in the first line.");
        else if (index > 0)
            check_err(line);
        index++;
    }
    if (index == 0)
        throw std::runtime_error("file is empty");
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::fill_db()
{
    std::string line;
    std::string date;
    float value;
    std::ifstream in("data.csv");
    if(!in.is_open())
        throw std::runtime_error("there's no db ");
    while (std::getline(in, line)) {
        std::istringstream iss(line);
        while (std::getline(iss, date, ',') >> value) {
            exchange[date] = value;
        }
    }
}