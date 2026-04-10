/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:57:08 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 18:38:47 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

#define EXEC_STRA 137
#define EXEC_ROBOT 45
#define EXEC_PAR 5


class AForm
{
    private:
        bool _is_signed;
        const std::string _name;
        const int _r_grade;
        const int _r_execute;
        void checkGrade(int grade) const;
        
    public:
        AForm();
        AForm(bool is_signed, std::string name, const int r_grade, const int r_execute);
        AForm &operator=(const AForm &other);
        ~AForm();

        bool get_state() const;
        const std::string get_name() const;
        int get_r_grade() const;
        int get_r_execute() const;
        void beSigned(Bureaucrat bureaucrat);
        virtual void execute(Bureaucrat const & executor) = 0;
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const AForm &AForm);

#endif