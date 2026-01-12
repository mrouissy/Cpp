/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:35:50 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/12 17:23:45 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <sstream>

Dog::Dog() :Animal("Dog")
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
    std::cout << "Dog constractor called" << std::endl;
}
Dog::~Dog()
{
    delete brain;
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

void Dog::setBrain(std::string ideas[100])
{
    brain->seter(ideas);
}
std::string* Dog::getBrain(void)const
{
    return brain->geter();   
}
