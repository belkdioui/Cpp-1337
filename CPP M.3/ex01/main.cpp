/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 15:39:31 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ScavTrap a;
    // a.beRepaired(5);
    ClapTrap *ptr;
    ptr =  new ScavTrap();
    ptr->attack("target");
    delete ptr;
    // ptr->attack("target");
}