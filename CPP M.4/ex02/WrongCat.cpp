/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:56:07 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/16 11:37:58 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout<<"default constructor called"<<std::endl;
}
WrongCat::WrongCat(const WrongCat& obj)
{
    *this = obj;
    std::cout<<"copy constructor called of WrongCat"<<std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    (void)obj;
    std::cout<<"assignement operator of WrongCat"<<std::endl;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout<<"destructor of WrongCat called"<<std::endl;
}
void WrongCat::makeSound()
{
    std::cout<<"sound of me is meow in wrong cat"<<std::endl;
}