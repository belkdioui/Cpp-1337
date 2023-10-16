/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:42 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:04:13 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("CAT")
{
    std::cout<<"default constructor called"<<std::endl;
}
Cat::Cat(const Cat& obj)
{
    *this = obj;
    std::cout<<"copy constructor called of cat"<<std::endl;
}
Cat& Cat::operator=(const Cat& obj)
{
    (void)obj;
    std::cout<<"assignement operator of cat"<<std::endl;
    return *this;
}
Cat::~Cat()
{
    std::cout<<"destructor of cat called"<<std::endl;
}
// void Cat::makeSound()
// {
//     std::cout<<"sound of me is meow"<<std::endl;
// }