/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:11:17 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:06:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal constarctor called" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout<< "Animal parametred  constarctor called" << std::endl;    
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout<< "Animal copy assignment called" << std::endl;    
    if(this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}
Animal::Animal(const Animal& other) : _type(other._type)
{
    std::cout<< "Animal copy constractor called" << std::endl;    
}
Animal::~Animal() 
{
    std::cout<< "Animal copy destractor called" << std::endl;   
}
std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout<< "Animal sound" << std::endl;   
    
}