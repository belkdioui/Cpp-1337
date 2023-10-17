/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:18:29 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/17 08:24:06 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : Type("")
{
    std::cout<< "default contrctor called in AMateria"<<std::endl;
}

AMateria::AMateria(const AMateria& obj) : Type(obj.Type)
{
    std::cout<<"copy constructor in AMateria"<<std::endl;
}

AMateria& AMateria::operator=(const &AMateria& obj)
{
    std::cout<<"assignement operator in AMateria"<<std::endl;
    this->Type = obj.Type;
    return *this;
}

AMateria::AMateria(std::string const & type) : Type(type)
{
    std::cout<<"parametrize constructor of AMateria"<<std::endl;
}

std::string const & AMateria::getType() const
{
    return this->Type;
}

AMateria::~AMateria()
{
    std::cout<< "destructor contrctor called in AMateria"<<std::endl;
}