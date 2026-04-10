/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:38:38 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 19:47:15 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    checkGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        _grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    checkGrade(_grade - 1);
    --_grade;
}

void Bureaucrat::decrementGrade()
{
    checkGrade(_grade + 1);
    ++_grade;
}

void Bureaucrat::checkGrade(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat grade too high";
}

const char *Bureaucrat::check_succ::what() const throw()
{
    return "Failed to execute Form";
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat grade too low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return o;
}

void Bureaucrat::signForm(AForm& form)
{
    form.beSigned(*this);
    std::cout << getName() << " signed " << form.get_name() << std::endl;
}
void Bureaucrat::executeForm(AForm &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.get_name();
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn’t execute " <<form.get_name() << " because " << e.what() <<std::endl;
    }
    
    
}