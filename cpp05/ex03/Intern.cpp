/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:10:39 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/10 15:26:41 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm* Intern::makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}
AForm* Intern::makeRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}
AForm* Intern::makePresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}
Intern::Intern(){}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}
Intern::~Intern()
{
    
}
AForm* Intern::makeFrom(std::string f_name, std::string f_target)
{
    
}
