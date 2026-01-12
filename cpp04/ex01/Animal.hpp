/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:06:41 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/12 17:47:18 by mrouissy         ###   ########.fr       */
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
        virtual ~Animal();
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual void setBrain(std::string ideas[100]);
        virtual std::string* getBrain(void) const;
};

#endif