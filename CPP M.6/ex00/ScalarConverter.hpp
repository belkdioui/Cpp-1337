/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:10:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/04 19:15:59 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define  SCALARCONVERTER_H
#include <iostream>
class ScalarConverter
{
    public:
    static void convert(std::string str);
    
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& obj);
    ScalarConverter& operator=(const ScalarConverter& obj);
    ~ScalarConverter();
};
#endif