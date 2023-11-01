/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:10:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/01 14:11:10 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define  SCALARCONVERTER_H
#include <iostream>
class ScalarConverter
{
    public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& obj);
    ScalarConverter& operator=(const ScalarConverter& obj);
    ~ScalarConverter();
    static void convert(std::string str);
};
#endif