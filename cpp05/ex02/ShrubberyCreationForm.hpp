/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:51:37 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 14:57:16 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        void createShrubberyFile() const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(bool is_signed, std::string name, const int r_grade, const int r_execute, const std::string target = "default");
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ShrubberyCreationForm (const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
        class check_exec : public std::exception
        {
            public:
                virtual const char *what() const throw();
        }; 
        class check_open : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
};

#endif