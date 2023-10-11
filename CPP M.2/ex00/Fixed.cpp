/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:00:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/11 15:31:09 by bel-kdio         ###   ########.fr       */
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
    *this= other;
    std::cout<<"Copy constructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    getRawBits();
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