/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:38:44 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 15:26:20 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

        void checkGrade(int grade) const;

    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        const std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException;
        class GradeTooLowException;
};

class Bureaucrat::GradeTooHighException : public std::exception
{
    public:
        virtual const char *what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception
{
    public:
        virtual const char *what() const throw();
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif