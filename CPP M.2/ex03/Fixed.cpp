/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:00:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/11 16:53:41 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : RawBits(0){}
Fixed::Fixed(const Fixed& other): RawBits(other.RawBits){}
Fixed::Fixed(const int integer): RawBits (integer << fractionalBIts){}
Fixed::Fixed(const float floating): RawBits(roundf(floating *(pow(2,fractionalBIts)))){}
Fixed::~Fixed(){}
float Fixed::toFloat(void) const
{
    float test;
    test = (float)RawBits * (pow(2,-8));
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
    this->RawBits = other.RawBits;   
    return *this;
}


int Fixed::getRawBits(void) const
{
    return RawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->RawBits = raw;
}

std::ostream& operator<<(std::ostream& output, const Fixed& obj)
{
    output<<obj.toFloat();
    return output;
}

bool Fixed::operator>(const Fixed& other)
{
    return (this->RawBits > other.toFloat());
}
bool Fixed::operator<(const Fixed& other)
{
    return (this->RawBits < other.toFloat());
}
bool Fixed::operator<=(const Fixed& other)
{
    return (this->RawBits <= other.toFloat());
}
bool Fixed::operator>=(const Fixed& other)
{
    return (this->RawBits >= other.toFloat());
}
bool Fixed::operator==(const Fixed& other)
{
    return (this->RawBits == other.toFloat());
}
bool Fixed::operator!=(const Fixed& other)
{
    return (this->RawBits == other.toFloat());
}
Fixed Fixed::operator+(const Fixed& other)
{
    return Fixed(this->RawBits + other.RawBits);
}
Fixed Fixed::operator*(const Fixed& other)
{
    int number;
    number = this->RawBits * other.toFloat();
    this->RawBits = number;
    return *this;
}
Fixed Fixed::operator/(const Fixed& other)
{
    int number;
    number = this->toFloat() / other.toFloat();
    
    this->RawBits = number;
    return *this;
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->RawBits - other.RawBits);
}
Fixed& Fixed::operator++()
{
    this->RawBits++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed obj;
    
    obj = *this;
    this->RawBits++;
    return obj;
}
Fixed& Fixed::operator--()
{
    this->RawBits--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed obj;
    
    obj = *this;
    --this->RawBits;
    return obj;
}
Fixed& Fixed::min(Fixed& FixedPoint0, Fixed& FixedPoint1)
{
    if(FixedPoint0 < FixedPoint1)
        return FixedPoint0;
    return FixedPoint1;   
}
const Fixed& Fixed::min(const Fixed& FixedPoint0, const Fixed& FixedPoint1)
{
    if(FixedPoint0.toFloat() <  FixedPoint1.toFloat())
        return FixedPoint0;
    return FixedPoint1;   
}

Fixed& Fixed::max(Fixed& FixedPoint0, Fixed& FixedPoint1)
{
    if(FixedPoint0 > FixedPoint1)
        return FixedPoint0;
    return FixedPoint1;   
}
const Fixed& Fixed::max(const Fixed& FixedPoint0, const Fixed& FixedPoint1)
{
    if(FixedPoint0.toFloat() >  FixedPoint1.toFloat())
        return FixedPoint0;
    return FixedPoint1;   
}