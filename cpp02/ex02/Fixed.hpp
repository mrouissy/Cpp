/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:41:54 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/04 14:57:15 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>



class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    
    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
    
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    
    static Fixed& max(Fixed& fixed1, Fixed& fixed2);
    static Fixed& min(Fixed& fixed1, Fixed& fixed2);

    static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
    static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);

    
    int getRawBits(void)const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;

};

std::ostream& operator<<(std::ostream &std,const Fixed &other);
#endif

