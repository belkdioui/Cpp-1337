/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:22:12 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/05 21:45:49 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdio>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ScalarConverter *obj = NULL;
        obj->convert(av[1]);
    }
}
