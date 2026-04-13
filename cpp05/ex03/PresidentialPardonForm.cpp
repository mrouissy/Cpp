/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:24:35 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 15:10:46 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm():AForm()
{
    _target = "default";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm()
{
    _target  = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), _target(other._target)
{
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
PresidentialPardonForm::~PresidentialPardonForm()
{
}

class PresidentialPardonForm::check_exec : public std::exception
{
    public:
        virtual const char *what() const throw();
};

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