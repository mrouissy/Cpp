/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:57:50 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:32:06 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;        
    // std::cout << "Character constrator called" << std::endl;
}
Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;   
    // std::cout << "Character parametred constrator called" << std::endl;
}
Character::Character(const Character& other)
{
    //std::cout << "Character copy constrator called" << std::endl;
    this->_name = other._name;
    for (int i = 0; i < 4; i++)
    {
        if(other.inventory[i] != NULL)
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}
Character& Character::operator=(const Character& other)
{
    //std::cout << "Character copy assignment called" << std::endl;   
    if(this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if(this->inventory[i] != NULL)
            {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
            if(other.inventory[i] != NULL)
                this->inventory[i] = other.inventory[i]->clone();
        }
    }
    return *this;
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if(inventory[i] != NULL)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
    }
    //std::cout << "Character destractor called" << std::endl;   
}
void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if(inventory[i] == NULL)
            return(inventory[i] = m, (void)0);
        // , std::cout << "equiped in "<< i << std::endl
    }
}
void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx] = NULL;        
}
void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
    return this->_name;
}
