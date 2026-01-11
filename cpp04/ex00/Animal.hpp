/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:06:41 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:25:16 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal& operator=(const Animal& other);
        Animal(const Animal& other);
         ~Animal();
        std::string getType(void) const;
         void makeSound(void) const;
};

#endif