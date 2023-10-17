/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:29:58 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/17 19:35:49 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout<<"default constructor of Ice"<<std::endl;
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
    std::cout<<"copy constructor in Ice"<<std::endl;
}
Ice& Ice::operator=(const Ice& obj)
{
    this->AMateria::operator=(obj);
    return *this;
}
AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout<<"default constructor of Ice"<<std::endl;
}