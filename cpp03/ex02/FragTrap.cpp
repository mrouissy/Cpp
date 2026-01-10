/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:14:30 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/10 14:08:48 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("fragtrap")
{
    _hp = 100;
    _ep = 100;
    _dmg = 30;
    std::cout << "FragTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;       
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hp = 100;
    _ep = 100;
    _dmg = 30;
    std::cout << "FragTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;       
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " has been duplicated ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)  
{
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << _name << " requests a positive high five! ✋" << std::endl;
}