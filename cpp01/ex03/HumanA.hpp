/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:41:51 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:35:02 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
    private:
        std :: string _name;
        Weapon &_Weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack(void);
};

#endif