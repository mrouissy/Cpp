/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:38:38 by mrouissy          #+#    #+#             */
/*   Updated: 2026/03/28 14:17:11 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade)
{
    
}

Bureaucrat::Bureaucrat()
{    
}
Bureaucrat::~Bureaucrat()
{
    
}


std::string Bureaucrat::getname() const
{
    return this->name;
}
int Bureaucrat::get_grade() const
{
    return this->grade;
}