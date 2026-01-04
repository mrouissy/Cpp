/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    FragTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 00:14:26 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/05 00:27:10 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);    
        void highFivesGuys(void);
        
};

#endif