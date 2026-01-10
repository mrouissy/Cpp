/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 22:51:10 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/10 14:08:48 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("claptrap"), _hp(10), _ep(10), _dmg(0)
{
    std::cout << "ClapTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _dmg(0)
{
    std::cout << "ClapTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        _name = other._name;
        _ep = other._ep;
        _hp = other._hp;
        _dmg = other._dmg;
    }
    std::cout << "ClapTrap " << _name << " has been assigned ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hp(other._hp), _ep(other._ep), _dmg(other._dmg)
{
    std::cout << "ClapTrap " << _name << " has been duplicated ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(_hp <= 0 || !_ep)
        return std::cout << _name << " can't attack" << std::endl, (void)0;
    _ep--;
    std::cout <<  _name << " attacks " << target << ", causing " << _dmg << " points of damage! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hp <= 0)
        return std::cout << _name << " is already dead" << std::endl, (void)0;
    _hp-=amount;
    if(_hp <= 0)
        return std::cout <<  _name << " is dead" << std::endl, (void)0;
    std::cout << _name << " received " << amount << " points of damage! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
     if(_hp <= 0 || !_ep)
        return std::cout << _name << " can't be Repaired" << std::endl, (void)0;
    _ep--;
    _hp+=amount;
    std::cout << _name << " repairs itself by " << amount << " points of HP! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}