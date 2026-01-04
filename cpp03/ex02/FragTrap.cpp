/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:14:30 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 00:30:02 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    setClapTrap("fragtrap", 100, 100, 30);
    std::cout << "FragTrap " << getClapTrapName() << "has been constructed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;       
}
FragTrap::FragTrap(std::string name)
{
    setClapTrap(name, 100, 100, 30);
    std::cout << "FragTrap " << getClapTrapName() << "has been constructed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;       
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getClapTrapName() << "has been destoyed ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << getClapTrapName() << "has been duplicated ( stats " << getClapTrapHp() << " HP, " << getClapTrapEp() << " EP, " << getClapTrapDmg() << " DMG)" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)  
{
    if(this != &other)
        setClapTrap(other.getClapTrapName(), other.getClapTrapHp(),getClapTrapEp(),getClapTrapDmg());
    return *this;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getClapTrapName() << " requests a positive high five! ✋" << std::endl;
}