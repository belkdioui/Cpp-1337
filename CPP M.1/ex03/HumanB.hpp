/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:27:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 10:09:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>


class HumanB
{
private:
    std::string name;
    Weapon *weaponHb;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void    setName(std::string n);
    std::string getName() const;
    void attack();
    void setWeapon(Weapon &weapon);
};
#endif