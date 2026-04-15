/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:10:39 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/15 13:15:52 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#define FORMS 3

class Intern
{
    private:
        AForm* makeShrubbery(std::string target);
        AForm* makeRobotomy(std::string target);
        AForm* makePresidential(std::string target);
        
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);     
        ~Intern();
        class FormNotFound : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        AForm* makeFrom(std::string f_name, std::string f_target);
};

#endif