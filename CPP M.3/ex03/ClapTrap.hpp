/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:00:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 13:31:41 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include<iostream>
#include <string>

class ClapTrap 
{
protected:
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name, int hp, int ep, int ad);
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        virtual void attack(const std::string& target);
        void takeDamage(int amount);
        void beRepaired(int amount);
        virtual ~ClapTrap();
};





#endif
