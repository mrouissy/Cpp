/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:59:23 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:09:45 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria():_type("default")
{
    // std::cout << "AMateria constractor called" << std::endl;
}
AMateria::AMateria(const std::string &type): _type(type)
{
    // std::cout << "AMateria parametered constractor called" << std::endl;
}
AMateria::AMateria(const AMateria &src) :_type(src._type)
{
    // std::cout << "AMateria copy constractor called" << std::endl;
}
AMateria& AMateria::operator=(const AMateria &src)
{
    // std::cout << "AMateria copy assignment called" << std::endl;
    if(this != &src)
        this->_type = src._type;
    return *this;   
}
AMateria::~AMateria()
{
    // std::cout << "AMateria destractor called" << std::endl;
}
const std::string &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}