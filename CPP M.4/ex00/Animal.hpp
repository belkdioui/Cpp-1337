/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:42:09 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 11:59:29 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string Type);
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        ~Animal();
        std::string getType(void) const;
        void makeSound() const;
};
#endif