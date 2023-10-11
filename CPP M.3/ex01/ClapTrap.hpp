/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:00:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/09 14:47:32 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include<iostream>

class ClapTrap
{
private:
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
    
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        void attack(const std::string& target);
        void takeDamage(int amount);
        void beRepaired(int amount);
        ~ClapTrap();
};





#endif
