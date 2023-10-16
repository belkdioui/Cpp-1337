/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:08:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 13:32:08 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unkonown")
{
    std::cout<<"constructor of Diamondtrap called"<<std::endl;
    this->FragTrap::HitPoints = 100;
    this->ScavTrap::EnergyPoints = 50;
    this->FragTrap::AttackDamage = 30;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), Name(name) 
{
    std::cout<<"constructor parameterise of Diamondtrap called"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj)
{
    std::cout<<"copy constructor of Diamondtrap"<<std::endl;    
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    std::cout<<"assignement operator called in DiamondTrap"<<std::endl;
    ClapTrap::operator=(obj);
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"deconstructer of DiamondTRAP CALLED"<<std::endl;
}
void DiamondTrap::whoAmi()
{
    std::cout << "who am'i : my name in diamondTRap is : "<< Name<< " and in my nmae in claptrap is : "<< ClapTrap::Name<<std::endl;
}