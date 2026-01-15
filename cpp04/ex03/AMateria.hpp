/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:44:31 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:09:26 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
   	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		AMateria& operator=(const AMateria &src);
		virtual ~AMateria();
		const std::string &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
