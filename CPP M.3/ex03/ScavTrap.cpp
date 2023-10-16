/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:36 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 10:20:49 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("unknown", 100, 50, 20)
{
    std::cout<<"scavtrap constructed"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"scavtrap : "<<name<< "constructor called" <<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout<<"copy consctor called in Scavtrap "<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoints =obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout<<"i'm sorry i think" << Name << "he don't has hitpoint or energy to attack"<<std::endl;
        return ;
    }
    EnergyPoints--;
    std::cout<<"ScavTrap "<< Name << " attacks " << target << " causing " <<HitPoints<<" points of damage! "<<std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << "Gate mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"scavtrap destructed"<<std::endl;
}