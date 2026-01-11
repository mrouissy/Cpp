/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:35:50 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:06:19 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :Animal("Dog")
{
    std::cout << "Dog constractor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destractor called" << std::endl;    
}
Dog::Dog(const Dog& other) : Animal::Animal(other)
{
    std::cout<< "Cat copy constractor called" << std::endl;    
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout<< "Cat copy assignment called" << std::endl;
    Animal::operator=(other);
    return *this;
}
void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;   
}
