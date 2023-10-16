/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:49:53 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:51:54 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknown")
{
    std::cout<<"WrongAnimal contructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : type(Type)
{
    std::cout<<"constructor parameterize to initialize type of Wronganimal" <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    std::cout<<"copy constructor Wronganimal called" <<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    std::cout<<"assignement operator Wronganimal called" <<std::endl;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Destructor called in Wronganimal"<<std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"sound of Wrong animal"<<std::endl;
}