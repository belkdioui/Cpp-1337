/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:19:26 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 10:13:35 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#ifndef HUMANA_HPP
#define HUMANA_HPP
class HumanA
{
private:
    std::string name;
    Weapon &weaponHa;
public:
    HumanA(std::string name, Weapon &weaponHa);
    ~HumanA();
    void    setName(std::string n);
    std::string getName();
    void attack();
};
#endif