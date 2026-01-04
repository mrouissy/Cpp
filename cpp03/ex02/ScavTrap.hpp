/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:30:26 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/04 23:53:16 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALVTRAP_HPP
#define SCALVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{        
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& other);
        ScavTrap(const ScavTrap&other);
        void guardGate();
};




#endif