/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:25:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/01 19:48:28 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <_ctype.h>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <sstream>
#include <sys/_types/_size_t.h>

ScalarConverter::ScalarConverter()
{}
ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{(void)obj;}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
    (void)obj;
    return (*this);
}

size_t strchrForString(const std::string& str, char ch) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            return i;
        }
    }
    return 0;
}

ScalarConverter::~ScalarConverter()
{
}

void ret_char(std::string str)
{
    
    size_t len = str.length();
    char c;
    if(len == 1 && std::isalpha(str[0]))
    {
        c = static_cast<char>(str[0]);
        std::cout<<"char: "<<str<<std::endl;
        return;
    }
    std::stringstream ss(str);
    int integer;
    ss>>integer;
    if (integer > 31 && integer < 127) 
    {
        c = static_cast<char>(integer);
        std::cout<<"char: "<< c <<std::endl;
    }
    else if(!ss.eof() || ss.fail())
        std::cout<<"char: "<<"impossible"<<std::endl;
    else if((integer >= 0 && integer <= 31))
        std::cout<<"char: "<<"Non displayable"<<std::endl;
    else
        std::cout<<"char: "<<"impossible"<<std::endl;
}

float ret_float(std::string str, int x)
{
    if (str == "-inf" && !x) 
    {
        std::cout<<"float: "<<"inff"<<std::endl;
        return 0;
    }
    if (str == "+inf" && !x) 
    {
        std::cout<<"float: "<<"inff"<<std::endl;
        return 0;
    }
    std::string svstr = str;
    if (svstr.back() == 'f')
        svstr.pop_back();
    std::stringstream ss(svstr);
    float floatnum;
    ss>>floatnum;
    if((!ss.eof() || ss.fail()) && !x)
        std::cout<<"float: "<<"impossible"<<std::endl;
    else
    {
        floatnum = static_cast<float>(floatnum);
        if(!x)
        { 
            if((floatnum / static_cast<int>(floatnum)) == 1 || floatnum == 0)
                std::cout<<"float: "<< floatnum <<".0f"<<std::endl;
            else
                std::cout<<"float: "<< floatnum <<"f"<<std::endl;
                
        }
    }
    return floatnum;
}
void ret_double(std::string str)
{
    if (str == "-inf") 
    {
        std::cout<<"double: "<<"inf"<<std::endl;
        return;
    }
    if (str == "+inf") 
    {
        std::cout<<"double: "<<"inf"<<std::endl;
        return;
    }
    double db;
    if(str.back() != 'f')
    {
        std::stringstream ss(str);
        ss>>db;
        if (!ss.eof() || ss.fail()) 
        {
            std::cout<<"double: "<<"impossible"<<std::endl;
            return;
        }
        else if (db == 0) {
            std::cout<<"double: "<< db <<".0"<<std::endl;
            return;
        }
    }
    float floatnum=ret_float(str, 1);
    if(!floatnum)
        std::cout<<"double: "<<"impossible"<<std::endl;
    else
    {
        db = static_cast<double>(floatnum);
        if((floatnum / static_cast<int>(floatnum)) == 1)
            std::cout<<"double: "<< db <<".0"<<std::endl;
        else
            std::cout<<"double: "<< db <<std::endl;
    }
}

void ret_int(std::string str)
{
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i]) || str[i] == '.' || str[i] == 'f' || str[i] == '+' || str[i] == '-') {
            
        }
        else {
            std::cout<<"int: "<<"impossible"<<std::endl;
            return;
        }
    }
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan") 
    {
        std::cout<<"int: "<<"impossible"<<std::endl;
        return;
    }
    int integer;
    std::stringstream ss(str);
    ss>>integer;
    if(str.back() != 'f' && str.back() != 'F' && !str.find('.'))
    {
        
        if (!ss.eof() || ss.fail()) 
        {
            std::cout<<"int: "<<"impossible"<<std::endl;
            return;
        }
    }
    if (integer == 0) 
    {
            std::cout<<"int: "<< integer <<std::endl;
            return;
    }
    float floatnum=ret_float(str, 1);
    if(!floatnum)
        std::cout<<"int: "<<"impossible"<<std::endl;
    else
    {
        integer = static_cast<int>(floatnum);
        std::cout<<"int: "<< integer <<std::endl;
    }
}

void ScalarConverter::convert(std::string str)
{
    ret_char(str);
    ret_int(str);
    ret_float(str , 0);
    ret_double(str);
}