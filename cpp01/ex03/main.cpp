/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:29:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:50:37 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{

    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.settype("some other type of club");
    bob.attack();

    Weapon club1 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setweapon(club1);
    jim.attack();
    club1.settype("some other type of club");
    jim.attack();
    return 0;
}