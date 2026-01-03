/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:41:54 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/03 12:10:09 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    Fixed& operator<<(const Fixed &other);
    ~Fixed();
    int getRawBits(void)const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;

};


#endif