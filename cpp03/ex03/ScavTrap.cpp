/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:38:59 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 13:51:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    setClapTrap("scavtrap", 100, 50, 20);
    std::cout << "ScavTrap " << getClapTrapName() << "has been constructed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;    
}

ScavTrap::ScavTrap(std::string name)
{
    setClapTrap(name, 100, 50, 20);
    std::cout << "ScavTrap " << getClapTrapName() << "has been constructed_p ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;    
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << getClapTrapName() << "has been destoyed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;    
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if(this != &other)
        setClapTrap(other.getClapTrapName(), other.getClapTrapHp(),getClapTrapEp(),getClapTrapDmg());
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap&other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << getClapTrapName() << "has been duplicated ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;    
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(getClapTrapHp() <= 0 || !getClapTrapEp())
        return std::cout << "ScavTrap can't attack" << std::endl, (void)0;
    std::cout << "ScavTrap " << getClapTrapName() << " attacks " << target << ", causing " << getClapTrapDmg() << " points of damage!" << std::endl;
    setClapTrap(getClapTrapName(), getClapTrapHp(), getClapTrapEp() - 1, getClapTrapDmg());
}