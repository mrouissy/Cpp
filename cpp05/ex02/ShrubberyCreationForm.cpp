/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:51:37 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 16:02:35 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(): AForm()
{}
ShrubberyCreationForm::ShrubberyCreationForm(bool is_signed, std::string name, const int r_grade, const int r_execute): AForm(is_signed, name, r_grade, r_execute)
{}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    AForm::operator=(other);
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

class ShrubberyCreationForm::check_exec : public std::exception
{
    public:
        virtual const char *what() const throw();
};


const char *ShrubberyCreationForm::check_exec::what() const throw()
{
    return "Error in requirements";
}

class ShrubberyCreationForm::check_open : public std::exception
{
    public:
        virtual const char *what() const throw();
};


const char *ShrubberyCreationForm::check_open::what() const throw()
{
    return "Error cant opent file";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if(executor.getGrade() > 137)
    {
        throw check_exec();
    }
    else
    {
        this->beSigned(executor);
        std::ifstream tree_file("trees");
        std::string line;
        if (!tree_file.is_open())
            throw check_open();
        while (std::getline(tree_file, line))
            std::cout << line << std::endl;
    }
}