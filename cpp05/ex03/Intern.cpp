/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:10:39 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 15:49:34 by mrouissy         ###   ########.fr       */
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

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}
Intern::~Intern()
{
 
}

const char *Intern::FormNotFound::what() const throw()
{
    return "Form not found";
}
AForm* Intern::makeFrom(std::string f_name, std::string f_target)
{
    AForm* (Intern::*types[FORMS])(std::string) = {&Intern::makeShrubbery, &Intern::makePresidential, &Intern::makeRobotomy};
    std::string formName[3] = {"shrubbery", "robotomy" , "pardon"};
    for (int i = 0; i < FORMS; i++)
    {
        if(f_name == formName[i])
        {
            std::cout << "Intern creates " << f_name << std::endl;
            return (this->*types[i])(f_target);
        }
    }
    throw FormNotFound();
    
}
