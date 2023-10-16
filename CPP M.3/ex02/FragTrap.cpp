/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:45 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/12 15:57:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): ClapTrap("unknown", 100, 100, 30)
{
    std::cout<<"FragTrap constructed"<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"FragTrap : "<<name<< "constructor called" <<std::endl;
}
FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout<<"copy consctor called in FragTrap "<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoints =obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout<<"i'm sorry i think he don't has hitpoint or energy to attack"<<std::endl;
        return ;
    }
    EnergyPoints--;
    std::cout<<"FragTrap "<< Name << " attacks " << target << " causing " <<HitPoints<<" points of damage! "<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap "  <<this->Name<< "highFives GUyes!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap destructed"<<std::endl;
}