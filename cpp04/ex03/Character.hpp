/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:08:06 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:57:13 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"


class Character : public ICharacter 
{
    private :
        std::string _name;
        AMateria* inventory[4];
    public :
        Character();
        Character(std::string name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        
};



#endif