/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:33:21 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:12:52 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :Animal("Cat")
{
    std::cout << "Cat constractor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat desstractor called" << std::endl;    
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout<< "Cat copy assignment called" << std::endl;
    Animal::operator=(other);
    return *this;
}
Cat::Cat(const Cat& other) :Animal::Animal(other)
{
    std::cout<< "Cat copy constractor called" << std::endl;    
}
void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;   
}