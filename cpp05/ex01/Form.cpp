/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:57:11 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 14:47:13 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _is_signed(false), _name("Default"),  _r_grade(150), _r_execute(0){}
Form::Form (const Form &other): _is_signed(other._is_signed), _name(other._name), _r_grade(other._r_grade), _r_execute(other._r_execute){}
Form::~Form(){}

Form::Form(bool is_signed, const std::string name, const int r_grade, const int r_execute) : _is_signed(is_signed), _name(name),  _r_grade(r_grade), _r_execute(r_execute)
{
    checkGrade(r_grade);    
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
        _is_signed = other._is_signed;
    return *this;
}
 
void Form::checkGrade(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

bool Form::get_state() const
{
    return this->_is_signed;
}
const std::string Form::get_name() const
{
    return this->_name;
}
int Form::get_r_grade() const
{
    return this->_r_grade;
}
int Form::get_r_execute() const
{
    return this->_r_execute;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > _r_grade)
        throw GradeTooLowException();
    _is_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low";
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
    o << "Description's form \n Form's name: " << form.get_name() <<
        "\nForm's state: " << form.get_state() << "Form's required grade: " << form.get_r_grade() <<
        "\nForm's required execute: " << form.get_r_execute() << std::endl;
    return o;  
}
