/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:16:21 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/19 11:34:23 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria *stored[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif

