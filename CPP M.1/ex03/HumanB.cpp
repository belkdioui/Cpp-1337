/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:29:17 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 10:21:08 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    if(weaponHb)
        std::cout<<name<<" attacks with their "<<weaponHb->getType()<<std::endl;
    else
        std::cout<<name<<" attacks with No weapon" <<std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
    weaponHb = &weapon;
}

HumanB::HumanB(std::string Name)
{
    name = Name;
    weaponHb = NULL;
}

HumanB::~HumanB()
{
    
}

void    HumanB::setName(std::string n)
{
    name = n;
}

std::string HumanB::getName()
{
    return name;
}