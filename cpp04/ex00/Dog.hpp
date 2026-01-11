/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:32:44 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:26:35 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();  
        void makeSound(void) const;

};

#endif