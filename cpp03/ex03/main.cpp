/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:25:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 13:51:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "=== Creating DiamondTrap with default constructor ===" << std::endl;
    DiamondTrap diamond1;
    std::cout << std::endl;

    std::cout << "=== Creating DiamondTrap with name 'Sparky' ===" << std::endl;
    DiamondTrap diamond2("Sparky");
    std::cout << std::endl;

    std::cout << "=== Testing whoAmI() method ===" << std::endl;
    diamond1.whoAmI();
    diamond2.whoAmI();
    std::cout << std::endl;

    std::cout << "=== Testing attack() - should use ScavTrap's attack ===" << std::endl;
    diamond2.attack("target1");
    diamond2.attack("target2");
    std::cout << std::endl;

    std::cout << "=== Testing inherited methods ===" << std::endl;
    diamond2.takeDamage(30);
    diamond2.beRepaired(20);
    diamond2.guardGate();
    diamond2.highFivesGuys();
    std::cout << std::endl;

    std::cout << "=== Testing copy constructor ===" << std::endl;
    DiamondTrap diamond3(diamond2);
    diamond3.whoAmI();
    std::cout << std::endl;

    std::cout << "=== Testing assignment operator ===" << std::endl;
    DiamondTrap diamond4("Temporary");
    diamond4 = diamond2;
    diamond4.whoAmI();
    std::cout << std::endl;

    std::cout << "=== Destroying all DiamondTraps ===" << std::endl;
    return 0;
}
