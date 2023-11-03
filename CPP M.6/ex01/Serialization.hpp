/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:48:53 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/02 10:12:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <sys/_types/_uintptr_t.h>
#include <cstdio>
#include <iostream>


typedef struct t_DATA
{
    int num1;
    int num2;
}Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif