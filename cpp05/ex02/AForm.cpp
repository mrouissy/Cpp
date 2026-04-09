/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:57:11 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 14:05:38 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _is_signed(false), _name("Default"),  _r_grade(150), _r_execute(0)
{  
}

AForm::AForm(bool is_signed, const std::string name, const int r_grade, const int r_execute) : _is_signed(is_signed), _name(name),  _r_grade(r_grade), _r_execute(r_execute)
{
    checkGrade(r_grade);    
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        _is_signed = other._is_signed;
    return *this;
}
 
AForm::~AForm()
{
    
}

void AForm::checkGrade(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}


bool AForm::get_state() const
{
    return this->_is_signed;
}
const std::string AForm::get_name() const
{
    return this->_name;
}
int AForm::get_r_grade() const
{
    return this->_r_grade;
}
int AForm::get_r_execute() const
{
    return this->_r_execute;
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > _r_grade)
        throw GradeTooLowException();
    _is_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade too low";
}

std::ostream &operator<<(std::ostream &o, const AForm &AForm)
{
    o << "Description's AForm \n AForm's name: " << AForm.get_name() <<
        "\nForm's state: " << AForm.get_state() << "AForm's required grade: " << AForm.get_r_grade() <<
        "\nForm's required execute: " << AForm.get_r_execute() << std::endl;
    return o;  
}
