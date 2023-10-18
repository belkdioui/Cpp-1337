/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:37:42 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 19:26:55 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("CAT")
{
    BrainCat = new Brain();
    std::cout<<"default constructor called"<<std::endl;
}
Cat::Cat(const Cat& obj)
{
    this->BrainCat = new Brain(*(obj.BrainCat));
    std::cout<<"copy constructor called of cat"<<std::endl;
}
Cat& Cat::operator=(const Cat& obj)
{
    (*this->BrainCat) = (*obj.BrainCat);
    std::cout<<"assignement operator of cat"<<std::endl;
    return *this;
}
Cat::~Cat()
{
    delete BrainCat;
    std::cout<<"destructor of cat called"<<std::endl;
}
void Cat::makeSound() const
{
    std::cout<<"sound of me is meow in class cat"<<std::endl;
}