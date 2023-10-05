/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:50:58 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/05 18:03:57 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include<iostream>
#include<math.h>

class Fixed
{
    int RawBits;
    static const int fractionalBIts = 8;
    
    public: 
        Fixed();
        Fixed(const int integer);
        Fixed(const float floating);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        Fixed& operator<<(const Fixed& other);
        float toFloat(void) const;
        int   toInt(void) const;
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits( int const raw);
};

#endif