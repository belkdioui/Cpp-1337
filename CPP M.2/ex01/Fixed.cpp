/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:00:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/11 17:10:32 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    RawBits = 0;
    std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const Fixed& other)
{
    // RawBits = other.RawBits;
    std::cout<<"Copy constructor called"<<std::endl;
    *this = other;
}

Fixed::Fixed(const int integer)
{
    RawBits = integer << fractionalBIts;
    std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float floating)
{
    RawBits = roundf(floating *(pow(2,fractionalBIts)));
    std::cout<<"Float constructor called"<< std::endl;
}

float Fixed::toFloat(void) const
{
    float test;
    test = (float)RawBits * (pow(2,-fractionalBIts));
    return test;
}

int Fixed::toInt(void) const
{
    int test;
    test = RawBits >> fractionalBIts;
    return test;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if(this != &other)
    {
        RawBits=other.RawBits;   
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return RawBits;
}

std::ostream& operator<<(std::ostream& output, const Fixed& obj)
{
    output<<obj.toFloat();
    return output;
}