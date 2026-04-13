/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:50:29 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/13 15:06:32 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    _target = "default";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm()
{
    _target  = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other), _target(other._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

class RobotomyRequestForm::check_exec : public std::exception
{
    public:
        virtual const char *what() const throw();
};

const char *RobotomyRequestForm::check_exec::what() const throw()
{
    return "Error in requirements";
}


void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > EXEC_ROBOT || !get_state())
    {
        throw check_exec();
    }
    else
    {
        std::cout << "Brrrrzzzz..." << std::endl;
        if (std::rand() % 2 == 0)
            std::cout << _target << " has been robotomized successfully." << std::endl;
        else
            std::cout << "Robotomy failed on " << _target << "." << std::endl;
    }
}
