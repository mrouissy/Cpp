/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:24:35 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 15:06:32 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm():AForm()
{
    _target = "default";
}
PresidentialPardonForm::PresidentialPardonForm(bool is_signed, std::string name, const int r_grade, const int r_execute, const std::string target) : AForm(is_signed, name, r_grade, r_execute)
{
    _target  = target;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), _target(other._target)
{
}


const char *PresidentialPardonForm::check_exec::what() const throw()
{
    return "Error in requirements";
}


void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > EXEC_PAR || !get_state())
    {
        throw check_exec();
    }
    else
    {
        std::cout << _target << " has been pardoned by ZB" << std::endl;
    }
}