/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:00:43 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 20:58:51 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <cstddef>
#include <string>

Character::Character() : Name("")
{
    for(int i = 0; i < 4 ;i++)
    {
        slot[i] = NULL;
        stored[i] = NULL;
    }   
    std::cout<<"default constructor in character"<<std::endl;
}
Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        delete stored[i];
    }
}
Character::Character(std::string name) : Name(name)
{
    for(int i = 0; i < 4 ;i++)
    {
        stored[i] = NULL;
        slot[i] = NULL;
    } 
    std::cout<<"constructor parametrize in character"<<std::endl;
}
Character::Character(const Character& obj)
{
    *this = obj;
    std::cout<<"copy constructor in character"<<std::endl;
}

Character& Character::operator=(const Character& obj)
{
    for(int i = 0; i < 4 ;i++)
    {
        delete slot[i];
        if(obj.slot[i])
            this->slot[i] = obj.slot[i]->clone();
        else
            this->slot[i] = NULL;
        this->stored[i]= NULL;
    }
    
    this->Name = obj.Name;
    return *this;
}

std::string const &Character::getName() const
{
    return Name;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <=3) 
    {
        slot[idx]->use(target);
    }
}

void Character::equip(AMateria* m)
{
    if(m)
    {
        for(int i = 0; i < 4; i++)
        {
            if (!slot[i]) 
            {
                delete stored[i];
                stored[i] = NULL;
                slot[i] = m;
                return ;
            }
        }
        delete m;
    }
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx <= 3)
    {
        for(int i = 0; i < 4; i++)
        {
            if (idx == i) 
            {
                stored[i] = slot[i];
                slot[i] = NULL;
            }
        }
    }
}