/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:33:21 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/12 17:08:56 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <sstream>

Cat::Cat() :Animal("Cat")
{
    this->brain = new Brain();
    std::string ideas[100];
    
    for (int i = 0; i < 100; i++)
    {
        std::stringstream ss;
        ss << "idea " << i << " " << this->getType();
        ideas[i] = ss.str();
    }

    brain->seter(ideas);
    std::cout << "Cat constractor called" << std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat desstractor called" << std::endl;    
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout<< "Cat copy assignment called" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        this->brain = other.brain;
    }
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

void Cat::setBrain(std::string ideas[100])
{
    brain->seter(ideas);
}
std::string* Cat::getBrain(void)const
{
    return brain->geter();   
}