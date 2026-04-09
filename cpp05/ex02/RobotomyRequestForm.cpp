/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:50:29 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 18:40:52 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    _target = "default";
}
RobotomyRequestForm::RobotomyRequestForm(bool is_signed, std::string name, const int r_grade, const int r_execute, const std::string target) : AForm(is_signed, name, r_grade, r_execute)
{
    _target  = target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    AForm::operator=(other);
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
