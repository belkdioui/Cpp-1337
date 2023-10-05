/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:50:44 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 09:45:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

void Harl::debug()
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!"<<std::endl;
}

void Harl::info()
{
    std::cout<<"I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning()
{
    std::cout<<"I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptr[4])(void);
    int i = 0;
    std::string arr[4]={"DEBUG","INFO","WARNING","ERROR"};
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning; 
    ptr[3] = &Harl::error;
    while(i < 4)
    {
        if (arr[i] == level)
        {
            (this->*ptr[i])();
            return ;
        }
        i++;
    }
    std::cout<<"NO level"<<std::endl;
}
Harl::Harl()
{
    
}
Harl::~Harl()
{
    
}