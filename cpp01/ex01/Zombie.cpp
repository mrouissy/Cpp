/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:24:02 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/31 20:13:31 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie() : _name("")
{
    std :: cout << " the zombie: " << this->_name << " was created." << std ::endl;
};

Zombie :: ~Zombie(void)
{
    std :: cout << " the zombie: " << this->_name << " destroyed." << std ::endl;
}

void Zombie::announce( void )
{    
    std :: cout << this->_name << " BraiiiiiiinnnzzzZ..." << std :: endl;
}

void Zombie :: seter(std :: string name)
{
    this->_name =name;
}