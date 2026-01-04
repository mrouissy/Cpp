#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _dmg;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &other);
        ClapTrap(const ClapTrap &other);
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setClapTrap(std::string name,int hp,int ep,int dmg);
        std::string getClapTrapName(void)const;
        int getClapTrapHp(void)const;
        int getClapTrapEp(void)const;
        int getClapTrapDmg(void)const;


};
#endif