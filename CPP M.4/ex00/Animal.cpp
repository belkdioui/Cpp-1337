/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:51:07 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/16 11:23:13 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout<<"Animal contructor called"<<std::endl;
}

Animal::Animal(std::string Type) : type(Type)
{
    std::cout<<"constructor parameterize to initialize type of animal" <<std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout<<"copy constructor animal called" <<std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    std::cout<<"assignement operator animal called" <<std::endl;
    return *this;
}

std::string Animal::getType(void) const
{
    return type;
}

Animal::~Animal()
{
    std::cout<<"Destructor called in animal"<<std::endl;
}

void Animal::makeSound() const
{
    if(type == "CAT")
        std::cout<<"sound of CAT is meow"<<std::endl;
    if(type == "DOG")
        std::cout<<"sound of DOG is wow"<<std::endl;
}