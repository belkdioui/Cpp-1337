/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:25:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/05 22:46:06 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <_ctype.h>
#include <algorithm>
#include <cctype>
#include <climits>
#include <cstdio>
#include <sstream>
#include <string>
#include <sys/_types/_size_t.h>


int ret_float(std::string str)
{
    if (str == "nanf" || str == "+inff" || str == "-inff" || str == "inff") 
        return 1;
    int comma = 0;
    if (str.back() == 'f' && str.find(".") < str.length() - 1 && str.length() > 2) 
    {
        for (unsigned int i = 0; i < str.length() - 1;  i++) 
        {
            if (str[i] == '.')
                comma++;
            if (!isdigit(str[i]) && str[i] != '.' && str[i] != '+' && str[i] != '-')
                return (0);
            if (i != 0 && (str[i] == '+' || str[i] == '-'))
            return (0);
        }
        if (comma > 1)
            return (0);
    }
    else 
        return (0);
    return (1);
}

int ret_char(std::string str)
{
    if (str.length() == 1 && str[0] > 31 && str[0] < 127) 
        return (2);
    return (0);
}

int ret_int(std::string str)
{
    for (unsigned int i = 0; i < str.length();  i++) 
    {     
        if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-')
            return (0);
        if (i != 0 && (str[i] == '+' || str[i] == '-'))
            return (0);
        if ((str[i] == '+' || str[i] == '-') && str.length() == 1)
            return (0);
    }
    return (3);
}

int ret_double(std::string str)
{
    if (str == "nan" || str == "+inf" || str == "-inf" || str == "inf") 
        return 4;
    int comma = 0;
    if (str.find(".")) 
    {
        for (unsigned int i = 0; i < str.length();  i++) 
        {
            if (str[i] == '.')
                comma++;
            if (!isdigit(str[i]) && str[i] != '.' && str[i] != '+' && str[i] != '-')
                return (0);
            if (i != 0 && (str[i] == '+' || str[i] == '-'))
            return (0);
        }
        if (comma > 1)
            return (0);
    }
    else 
        return (0);
    return (4);
}
void print_char(std::string str, int type)
{
    if(str.length() == 0)
    {
        std::cout<<"char: "<<"impossible"<<std::endl;
        return ;
    }
    if(type == 3)
    {
        int integer;
        std::stringstream ss(str);
        ss >> integer;
        if ((integer >= 0 && integer <= 31) || integer == 127) 
        {
            std::cout<<"char: "<<"Non displayable"<<std::endl;
            return ;
        }
        else if (integer >= 32 && integer < 127)
        {
            std::cout<<"char: "<<static_cast<char>(integer)<<std::endl;
            return ;
        }
    }
    else if (type == 1)
    {
        str.pop_back();
        std::stringstream ss(str);
        float floatnum;
        ss>>floatnum;
        int integer;
        integer = static_cast<int>(floatnum);
        if ((integer >= 0 && integer <= 31) || integer == 127) 
        {
            std::cout<<"char: "<<"Non displayable"<<std::endl;
            return ;
        }
        else if (integer >= 32 && integer < 127)
        {
            std::cout<<"char: "<<static_cast<char>(integer)<<std::endl;
            return ;
        }
    }
    else if (type == 4)
    {
        std::stringstream ss(str);
        double db;
        ss>>db;
        int integer;
        integer = static_cast<int>(db);
        if ((integer >= 0 && integer <= 31) || integer == 127) 
        {
            std::cout<<"char: "<<"Non displayable"<<std::endl;
            return ;
        }
        else if (integer >= 32 && integer < 127)
        {
            std::cout<<"char: "<<static_cast<char>(integer)<<std::endl;
            return ;
        }
    }
    else if (type == 2)
    {
        std::cout<<"char: "<<str<<std::endl;
        return ;
    }
    std::cout<<"char: "<<"impossible"<<std::endl;
    
}

void print_int(std::string str, int type)
{
    if (str == "nan" || str == "+inf" || str == "-inf" || str == "nanf" || str == "+inff" || str == "-inff" || str == "inf" || str == "inff" || str.length() == 0)
    { 
        std::cout<<"int: "<<"impossible"<<std::endl;
        return ;
    }
    if(type == 3)
    {
        int integer;
        std::stringstream ss(str);
        ss >> integer;
        if (integer >= INT_MAX || integer <= INT_MIN) {
            std::cout<<"int: "<<"impossible"<<std::endl;
            return ;
        }
        std::cout<<"int: "<<integer<<std::endl;
        return ;
    }
    else if (type == 2) 
    {
        int integer = static_cast<int>(str[0]);
        if (integer >= 32 && integer < 127)
        {
            std::cout<<"int: "<<integer<<std::endl;
            return ;
        }
    }
    else if (type == 1)
    {
        str.pop_back();
        std::stringstream ss(str);
        float floatnum;
        ss>>floatnum;
        if (static_cast<int>(floatnum) >= INT_MAX || static_cast<int>(floatnum) <= INT_MIN) 
        {
            std::cout<<"int: "<<"impossible"<<std::endl;
            return ;
        }
        std::cout<<"int: "<<static_cast<int>(floatnum)<<std::endl;
        return;
    }
    else if (type == 4)
    {
        std::stringstream ss(str);
        double db;
        ss>>db;
        if (static_cast<int>(db) >= INT_MAX || static_cast<int>(db) <= INT_MIN) 
        {
            std::cout<<"int: "<<"impossible"<<std::endl;
            return ;
        }
        std::cout<<"int: "<<static_cast<int>(db)<<std::endl;
        return;
    }
     std::cout<<"int: "<<"impossible"<<std::endl;
}

void print_float(std::string str, int type)
{
    if(str.length() == 0)
    {
        std::cout<<"float: "<<"impossible"<<std::endl;
        return ;
    }
    if(type == 3)
    {
        float floatnum;
        std::stringstream ss(str);
        ss >> floatnum;
        if(floatnum <= 1.17549e-038 || floatnum >= 3.40282e+038)
            std::cout<<"float: "<<static_cast<float>(floatnum)<<"f"<<std::endl;
        else
            std::cout<<"float: "<<floatnum<<".0f"<<std::endl;
        return ;
    }
    else if (type == 2)
    {
       int integer = static_cast<int>(str[0]);
        if (integer >= 32 && integer < 127)
        {
            std::cout<<"float: "<<static_cast<float>(integer)<<".0f"<<std::endl;
            return ;
        }
    }
    else if (type == 1)
    {
        str.pop_back();
        std::stringstream ss(str);
        float floatnum;
        ss>>floatnum;
        if((floatnum / static_cast<int>(floatnum)) == 1 || floatnum == 0)
        {
            if(floatnum <= 1.17549e-038 || floatnum >= 3.40282e+038)
                std::cout<<"float: "<<static_cast<float>(floatnum)<<"f"<<std::endl;
            else
              std::cout<<"float: "<<floatnum<<".0f"<<std::endl;
        }
        else
            std::cout<<"float: "<< floatnum <<"f"<<std::endl;
        return;
    }
    else if (type == 4)
    {
        std::stringstream ss(str);
        double db;
        ss>>db;
        if((db / static_cast<int>(db)) == 1 || db == 0)
            std::cout<<"float: "<< static_cast<float>(db) <<".0f"<<std::endl;
        else
            std::cout<<"float: "<< static_cast<float>(db) <<"f"<<std::endl;
        return;
    }
     std::cout<<"float: "<<"impossible"<<std::endl;
}

void print_db(std::string str, int type)
{
    if(str.length() == 0)
    {
        std::cout<<"double: "<<"impossible"<<std::endl;
        return ;
    }
    if(type == 3)
    {
        double db;
        std::stringstream ss(str);
        ss >> db;
        if(db <= 2.22507e-308 || db >= 1.79769e+308)
            std::cout<<"double: "<<db<<std::endl;
        else
            std::cout<<"double: "<<db<<".0"<<std::endl;
        return ;
    }
    else if (type == 2)
    {
       int integer = static_cast<int>(str[0]);
        if (integer >= 32 && integer < 127)
        {
            std::cout<<"double: "<<static_cast<double>(integer)<<".0"<<std::endl;
            return ;
        }
    }
    else if (type == 1)
    {
        str.pop_back();
        std::stringstream ss(str);
        double db;
        ss>>db;
        if((db / static_cast<int>(db)) == 1 || db == 0)
            std::cout<<"double: "<< static_cast<double>(db) <<".0"<<std::endl;
        else
            std::cout<<"double: "<< static_cast<double>(db) <<std::endl;
        return;
    }
    else if (type == 4)
    {
        std::stringstream ss(str);
        double db;
        ss>>db;
        if((db / static_cast<int>(db)) == 1 || db == 0)
            std::cout<<"double: "<< db <<".0"<<std::endl;
        else
            std::cout<<"double: "<< db <<std::endl;
        return;
    }
     std::cout<<"double: "<<"impossible"<<std::endl;
}


void ScalarConverter::convert(std::string str)
{
    int i;
    int types[4] = {ret_float(str),  ret_int(str), ret_char(str), ret_double(str)};
    for (i = 0; i < 4; i++) {
        if (types[i] > 0)
            break;
    }
    print_char(str, types[i]);
    print_int(str, types[i]);
    print_float(str , types[i]);
    print_db(str, types[i]);
}
