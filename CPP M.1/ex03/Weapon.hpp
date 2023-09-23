/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:04:31 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/23 16:08:58 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string Type);
    ~Weapon();
    void    setType(std::string);
    std::string    getType();
};
#endif