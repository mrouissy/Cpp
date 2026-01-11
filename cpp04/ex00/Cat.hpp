/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:21:45 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 14:25:25 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    public :
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound(void) const; 
};

#endif