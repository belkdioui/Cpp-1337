/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:49:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 19:23:45 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("DOG")
{
    BrainDog = new Brain();
    std::cout<<"default constructor called"<<std::endl;
}
Dog::Dog(const Dog& obj)
{
    this->BrainDog = new Brain(*(obj.BrainDog));
    std::cout<<"copy constructor called of Dog"<<std::endl;
}
Dog& Dog::operator=(const Dog& obj)
{
    (*this->BrainDog) = (*obj.BrainDog);
    std::cout<<"assignement operator of Dog"<<std::endl;
    return *this;
}
Dog::~Dog()
{
    delete BrainDog;
    std::cout<<"destructor of Dog called"<<std::endl;
}
void Dog::makeSound() const
{
    std::cout<<"sound of me is wow in CLASS DOG"<<std::endl;
}