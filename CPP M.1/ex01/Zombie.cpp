/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:38:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/22 11:38:51 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setZombie(std::string name_zombie)
{
    name = name_zombie;
}

std::string    Zombie::getZombie(void)
{
    return name;
}

void    Zombie::announce(void)
{
    std::cout<<getZombie()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
    std::cout<<name<<std::endl;
}


