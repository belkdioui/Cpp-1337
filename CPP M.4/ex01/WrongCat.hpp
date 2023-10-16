/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:54:44 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:56:00 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <iostream>


class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        ~WrongCat();
        // void makeSound() ;
};

#endif