/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:17:55 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/13 14:23:40 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure& other);  
        Cure& operator=(const Cure& other);  
        ~Cure();  
        void use(ICharacter &target);
		AMateria* clone() const;


};
#endif