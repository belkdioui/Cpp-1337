/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:46:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:04:09 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>


class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        ~Cat();
        // void makeSound() ;
};

#endif