/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:10:28 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:51:51 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void) {std :: cout << this->_name << " attacks with their " << this->_Weapon->gettype() << std ::endl;}

HumanB ::HumanB(std ::string name) :_name(name){}

void HumanB::setweapon(Weapon &Weapon){this->_Weapon = &Weapon;}