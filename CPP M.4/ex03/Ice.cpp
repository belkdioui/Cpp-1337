/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:29:58 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/17 08:30:21 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout<<"default constructor of Ice"<<std::endl;
};

Ice::Ice(const Ice& obj)
{
    std::cout<<"copy constructor in Ice"<<std::endl;
    *this = obj;
}
Ice& Ice::operator=(const Ice& obj)
{
    (void) obj;
    return *this;
}
Ice* Ice::clone()
{
    Ice * obj;
    obj = this;
    return obj;
}

Ice::~Ice()
{
    std::cout<<"default constructor of Ice"<<std::endl;
};