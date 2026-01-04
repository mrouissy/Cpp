/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:25:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 00:31:25 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap1("Robot1");
    ClapTrap clap2("Robot2");
    ScavTrap scav1("R1");
    ScavTrap scav2;

    scav1.attack("R1");
    scav1.beRepaired(100);
    scav2.attack("Robot2");
    scav1.guardGate();
    
    return 0;
}