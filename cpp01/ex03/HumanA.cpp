/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:41:51 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:27:33 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//<name> attacks with their <weapon type>

void HumanA::attack(void) {std :: cout << this->_name << " attacks with their " << this->_Weapon.gettype() << std ::endl;}

HumanA ::HumanA(std::string name, Weapon& weapon): _name(name), _Weapon(weapon){}