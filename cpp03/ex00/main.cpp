/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:25:22 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/04 23:25:24 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1("Robot1");
    ClapTrap clap2("Robot2");

    clap1.attack("Robot2");
    clap2.takeDamage(5);
    clap2.beRepaired(3);
    clap1.attack("Robot2");
    clap2.takeDamage(5);
    
    return 0;
}
