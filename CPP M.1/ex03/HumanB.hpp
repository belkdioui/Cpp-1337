/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:27:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 16:03:17 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
    std::string name;
    Weapon *weaponHb;
public:
    HumanB(std::string name);
    ~HumanB();
    void    setName(std::string n);
    std::string getName() const;
    void attack();
    void setWeapon(Weapon &weapon);
};
#endif