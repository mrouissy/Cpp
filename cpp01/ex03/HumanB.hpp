/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:05:19 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:51:43 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

//<name> attacks with their <weapon type>

class HumanB
{
    private:
        std :: string _name;
        Weapon *_Weapon;

    public:
        HumanB(std ::string name);
        void attack(void);
        void setweapon(Weapon &Weapon);
};

#endif