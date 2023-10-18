/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:00:38 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 17:00:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
    std::string Name;
    AMateria *slot[4];
    AMateria *stored[4];
    public :
        Character();
        ~Character();
        Character(const Character& obj);
        Character(std::string name);
        Character& operator=(const Character& obj);
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif