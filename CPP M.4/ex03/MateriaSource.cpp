/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:30:33 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/21 13:03:01 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    for(int i =0; i < 4; i++)
    {
        stored[i] = NULL;
    }
    // std::cout<<"default constructor of MateriaSource"<<std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& obj)
{
    *(this->stored) = *(obj.stored);
    // std::cout<<"copy constructor of MateriaSource"<<std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    for (int i = 0; i < 4; i++) {
        delete this->stored[i];
        this->stored[i] = obj.stored[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 ; i++) {
        if (this->stored[i])
            delete this->stored[i];
    }
}

void MateriaSource::learnMateria(AMateria* ama)
{
    // for (int i = 0; i < 4; i++) {
    //     if(!stored[i] && ama != NULL)
    //       this->stored[i] = ama;  
    // }
    int i;
    for (i = 0; i < 4 && stored[i]; i++);
    if (i < 4)
        this->stored[i] = ama;   
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if(this->stored[i] && this->stored[i]->getType() == type)
            return stored[i]->clone();
    }
    return NULL;
}