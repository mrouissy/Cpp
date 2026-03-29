/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:57:08 by mrouissy          #+#    #+#             */
/*   Updated: 2026/03/29 23:57:44 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Form
{
    private:
        bool _is_signed;
        const std::string _name;
        const int _r_grade;
        const int _r_execute;
        void checkGrade(int grade) const;
        
    public:
        Form();
        Form(bool is_signed, std::string name, const int r_grade, const int r_execute);
        Form &operator=(const Form &other);
        ~Form();

        bool get_state() const;
        const std::string get_name() const;
        int get_r_grade() const;
        int get_r_execute() const;
        void beSigned(Bureaucrat bureaucrat);
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

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif