/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:13:54 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:12:31 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
    //std::cout << "Ice constractor called " << std::endl;    
}
Ice::Ice(const Ice& other): AMateria(other)
{
  //  std::cout << "Ice copy constractor called " << std::endl;    
}
Ice& Ice::operator=(const Ice& other)
{
    //std::cout << "Ice copy assignment called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}
Ice::~Ice()
{
    //std::cout << "Ice destractor called " << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}


void Ice::use(ICharacter &target)
{
       std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}