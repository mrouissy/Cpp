/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:24:02 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/31 18:03:42 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std :: string name) : _name(name)
{
    std :: cout << " the zombie: " << name << " crated." << std ::endl;
}
Zombie :: ~Zombie(void)
{
    std :: cout << " the zombie: " << this->_name << " destroyed." << std ::endl;
}

void Zombie::announce( void )
{    
    std :: cout << this->_name << " BraiiiiiiinnnzzzZ..." << std :: endl;
}