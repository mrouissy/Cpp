/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:44:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/04 13:35:31 by mrouissy         ###   ########.fr       */
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
        this->_fixedPointValue = other._fixedPointValue;
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

Fixed::Fixed(const int raw)
{
   this->_fixedPointValue =raw * pow(2,_fractionalBits);
    std::cout << "Int constructor called"<< std::endl;
}

Fixed::Fixed(const float raw)
{
    this->_fixedPointValue = roundf(raw * pow(2,_fractionalBits));
    std::cout << "Float constructor calle"<< std::endl;
}

int Fixed::toInt(void)const
{
    return _fixedPointValue / pow(2,_fractionalBits);
}

float Fixed::toFloat(void)const
{
    return _fixedPointValue / pow(2,_fractionalBits);
}

std::ostream& operator<<(std::ostream &std,const Fixed &other)
{
    std << other.toFloat();
    return std;
}
