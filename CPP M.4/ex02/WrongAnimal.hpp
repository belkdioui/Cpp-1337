/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:47:40 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:48:42 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string Type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        ~WrongAnimal();
        std::string getType(void) const;
        void makeSound() const;
};
#endif