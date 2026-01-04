/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:25:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 00:31:30 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap1("Robot1");
    ClapTrap clap2("Robot2");
    ScavTrap scav1("R1");
    ScavTrap scav2;
    FragTrap frag1("Frag1");
    FragTrap frag2;

    scav1.attack("R1");
    scav1.beRepaired(100);
    scav2.attack("Robot2");
    scav1.guardGate();
    
    frag1.attack("Enemy");
    frag1.highFivesGuys();
    frag2.highFivesGuys();
    
    return 0;
}
