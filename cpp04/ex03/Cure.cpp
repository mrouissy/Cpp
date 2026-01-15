/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:20:16 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:11:39 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
   // std::cout << "Cure constractor called " << std::endl;    
}
Cure::Cure(const Cure& other): AMateria(other)
{
   // std::cout << "Cure copy constractor called " << std::endl;    
}
Cure& Cure::operator=(const Cure& other)
{
    //std::cout << "Cure copy assignment called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}
Cure::~Cure()
{
   // std::cout << "Cure destractor called " << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}


void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}