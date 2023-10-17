/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:29:02 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/17 08:29:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"
#include<iostream>
class Ice: public AMateria
{
    public:
    Ice();
    Ice(const Ice& obj);
    Ice& operator=(const Ice& obj);
    ~Ice();
    AMateria* clone();
    void use(ICharacter& target);
};

#endif