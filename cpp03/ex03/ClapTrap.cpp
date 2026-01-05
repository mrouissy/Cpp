/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 22:51:10 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 00:39:45 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("claptrap"), _hp(10), _ep(10), _dmg(0)
{
    std::cout << "ClapTrap " << _name << " has been constructed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _dmg(0)
{
    std::cout << "ClapTrap " << _name << " has been constructed_p ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destoyed ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
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
    std::cout << "ClapTrap " << _name << "has been asigned ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hp(other._hp), _ep(other._ep), _dmg(other._dmg)
{
    std::cout << "ClapTrap " << _name << "has been duplicated ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(_hp <= 0 || !_ep)
        return std::cout << "can't attack" << std::endl, (void)0;
    _ep--;
    std::cout << "ClapTrap " << _name << " attacks " << target <<" , causing " << _dmg << " points of damage! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hp <= 0)
        return std::cout << "ClapTrap "<< _name <<" is already dead"<< std::endl, (void)0;
    _hp-=amount;
    if(_hp <= 0)
        return std::cout << "ClapTrap "<< _name <<" is dead"<< std::endl, (void)0;
    std::cout << "ClapTrap " << _name << " received " << amount <<" points of damage! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
     if(_hp <= 0 || !_ep)
        return std::cout << "can't be Repaired" << std::endl, (void)0;
    _ep--;
    _hp+=amount;
    std::cout << "ClapTrap " << _name << " repairs itself by " << amount << " points of HP! ( stats " << _hp << " HP, " << _ep << " EP, " << _dmg << " DMG)" << std::endl;
}

void ClapTrap::setClapTrap(std::string name,int hp,int ep,int dmg)
{
    _name = name;
    _hp = hp;
    _ep = ep;
    _dmg = dmg;
}
std::string ClapTrap::getClapTrapName(void) const
{
    return _name;
}
int ClapTrap::getClapTrapHp(void) const
{ 
    return _hp;
}
int ClapTrap::getClapTrapEp(void) const
{
    return _ep;
}
int ClapTrap::getClapTrapDmg(void) const
{
    return _dmg;   
}