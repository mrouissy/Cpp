/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:50:29 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 14:56:30 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(bool is_signed, std::string name, const int r_grade, const int r_execute, const std::string target);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        RobotomyRequestForm (const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor);
        class check_exec : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };        
        
                
};



#endif