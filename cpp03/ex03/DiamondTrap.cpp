/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:35:57 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 13:51:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
    setClapTrap("default_clap_name", FragTrap::getClapTrapHp(), ScavTrap::getClapTrapEp(), FragTrap::getClapTrapDmg());
    std::cout << "DiamondTrap " << _name << " has been constructed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    setClapTrap(name + "_clap_name", FragTrap::getClapTrapHp(), ScavTrap::getClapTrapEp(), FragTrap::getClapTrapDmg());
    std::cout << "DiamondTrap " << _name << " has been constructed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " has been destroyed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap " << _name << " has been duplicated ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << _name << " and my ClapTrap name is " << ClapTrap::getClapTrapName() << std::endl;
}