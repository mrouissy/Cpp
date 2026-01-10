/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:38:59 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/10 14:08:48 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("scavtrap")
{
    _hp = 100;
    _ep = 50;
    _dmg = 20;
    std::cout << "ScavTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;    
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hp = 100;
    _ep = 50;
    _dmg = 20;
    std::cout << "ScavTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;    
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " has been destroyed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;    
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap&other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " has been duplicated ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;    
}

void ScavTrap::attack(const std::string& target)
{
    if(_hp <= 0 || !_ep)
        return std::cout << _name << " can't attack" << std::endl, (void)0;
    _ep--;
    std::cout << _name << " attacks " << target << ", causing " << _dmg << " points of damage! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << _name << " is now in Gate keeper mode." << std::endl;
}