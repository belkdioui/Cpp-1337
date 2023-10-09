/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:57 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 17:26:35 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"obj constructed"<<std::endl;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    Name = "unknown";
}

ClapTrap::ClapTrap(std::string str)
{
    Name = str;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
        return ;
    EnergyPoints--;
    std::cout<<"ClapTrap "<< Name << " attacks " << target << " causing " <<HitPoints<<" points of damage! "<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints - amount < 0)
    {
        HitPoints = 0;
        return;
    }
    HitPoints-=amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoints && EnergyPoints)
        HitPoints+=amount;
    EnergyPoints--;
    // std::cout<<"ClapTrap "<< Name << " repair " << amount << " causing " <<HitPoints<<" points of damage! "<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"obj destructed"<<std::endl;
}