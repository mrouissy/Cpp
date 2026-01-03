/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:44:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/03 21:55:50 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedPointValue(0)
{
    std::cout << "Default constructor called"<< std::endl;
}
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called"<< std::endl;
    if(this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

/*
• A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value
should be initialized to 8, like in exercise 00.

• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value
should be initialized to 8, like in exercise 00.

• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.

• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:

• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as a parameter.
*/

Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called"<< std::endl;
    setRawBits(raw);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor calle"<< std::endl;
    setRawBits(raw);
}

float Fixed::toFloat(void)const
{
    
}

int Fixed::toInt(void)const
{
    
}

Fixed& Fixed::operator<<(const Fixed &other)
{
    
}