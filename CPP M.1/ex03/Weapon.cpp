/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:33:52 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 08:41:04 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon has been constructed" << std::endl;
}
Weapon::Weapon(std::string Type)
{
    type = Type;
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string t)
{
    type = t;
}

const std::string& Weapon::getType() const
{
    return type;
}
