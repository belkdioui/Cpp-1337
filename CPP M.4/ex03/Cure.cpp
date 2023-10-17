/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 07:58:09 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/17 08:35:45 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout<<"default constructor of Cure"<<std::endl;
};

Cure::Cure(const Cure& obj)
{
    std::cout<<"copy constructor in Cure"<<std::endl;
    *this = obj;
}
Cure& Cure::operator=(const Cure& obj)
{
    (void) obj;
    return *this;
}
Cure* Cure::clone()
{
    Cure * obj;
    obj = this;
    return obj;
}

Cure::~Cure()
{
    std::cout<<"default constructor of Cure"<<std::endl;
}