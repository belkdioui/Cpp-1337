/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:09:14 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/02 22:04:27 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <ios>
#include <malloc/_malloc.h>
#include <sstream>
#include "stdlib.h"

int main()
{
    Data *ptr, *ptr1;
    uintptr_t raw;

    ptr = new Data();
    ptr1 = new Data();
    ptr->num1 = 5;
    ptr->num2 = 6;
    raw = Serializer::serialize(ptr);
    ptr1 = Serializer::deserialize(raw);
    std::cout<<ptr1->num1<<std::endl;
    delete ptr;
    delete ptr1;
}