/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:32:06 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 11:32:07 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::settype(std ::string type){this->_type = type;}

const std::string& Weapon::gettype(void){return this->_type;}

Weapon ::Weapon(std :: string type) : _type(type){};