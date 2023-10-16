/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:57 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 09:57:25 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("unknown"), HitPoints(10) , EnergyPoints(10) ,AttackDamage(0)
{
    std::cout<<"claptrap constructed"<<std::endl;
}

ClapTrap::ClapTrap(std::string str) : Name(str) , HitPoints(10) , EnergyPoints(10) , AttackDamage(0)
{
    std::cout<<"claptrap : "<<Name<< "constructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj): Name(obj.Name), HitPoints(obj.HitPoints), EnergyPoints(obj.EnergyPoints), AttackDamage(obj.AttackDamage)
{
    std::cout<<"copy consctor called"<<std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoints =obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout<<"i'm sorry i think he don't has hitpoint or energy to attack"<<std::endl;
        return ;
    }
    EnergyPoints--;
    std::cout<<"ClapTrap "<< Name << " attacks " << target << " causing " <<HitPoints<<" points of damage! "<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints - amount < 0)
    {
        HitPoints = 0;
        std::cout<<"is dead"<<std::endl;
        return;
    }
    std::cout<<"takes "<<amount<<" damage"<<std::endl;
    HitPoints-=amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoints && EnergyPoints)
        HitPoints+=amount;
    std::cout<<"claptrap "<<this->Name<<" is healed " <<amount<<std::endl;
    EnergyPoints--;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"claptrap destructed"<<std::endl;
}