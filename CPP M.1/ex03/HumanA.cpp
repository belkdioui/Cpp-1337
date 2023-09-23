/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:29:17 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 16:02:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout<<name<<" attacks with their "<<weaponHa.getType()<<std::endl;
}

HumanA::HumanA(std::string Name, Weapon &WeaponHa):weaponHa(WeaponHa)
{
    name = Name;
}

HumanA::~HumanA()
{
    
}

void    HumanA::setName(std::string n)
{
    name = n;
}

std::string HumanA::getName()
{
    return name;
}
