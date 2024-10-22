/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 07:58:32 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 12:47:33 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"
#include<iostream>
class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& obj);
        Cure& operator=(const Cure& obj);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif