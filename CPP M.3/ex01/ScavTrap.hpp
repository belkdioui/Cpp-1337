/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:40 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/12 18:52:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& obj);
    ScavTrap& operator=(const ScavTrap& obj);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

#endif