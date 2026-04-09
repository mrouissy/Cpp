/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:51:37 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 18:58:24 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(): AForm()
{
    _target = "default";
}
ShrubberyCreationForm::ShrubberyCreationForm(bool is_signed, std::string name, const int r_grade, const int r_execute, const std::string target): AForm(is_signed, name, r_grade, r_execute)
{
    _target = target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    AForm::operator=(other);
    _target = other._target;
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

void ShrubberyCreationForm::createShrubberyFile() const
{
    std::ofstream tree_file;

    tree_file.open((_target + "_shrubbery").c_str());

    if (!tree_file.is_open())
        throw check_open();
    tree_file << "       /\\             /\\             /\\         " << std::endl;
    tree_file << "      /\\*\\          /\\*\\          /\\*\\       " << std::endl;
    tree_file << "     /\\O\\*\\       /\\O\\*\\       /\\O\\*\\     " << std::endl;
    tree_file << "    /*/\\/\\/\\     /*/\\/\\/\\     /*/\\/\\/\\    " << std::endl;
    tree_file << "   /\\O/\\*\\/\\   /\\O/\\*\\/\\   /\\O/\\*\\/\\   " << std::endl;
    tree_file << "  /\\*/*/\\O/\\\\ /\\*/*/\\O/\\\\ /\\*/*/\\O/\\\\  " << std::endl;
    tree_file << "        ||              ||              ||         " << std::endl;
    tree_file << "        ||              ||              ||         " << std::endl;
    tree_file << "  =================================================" << std::endl;
    tree_file.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (executor.getGrade() > EXEC_STRA || !get_state())
    {
        throw check_exec();
    }
    else
    {
        createShrubberyFile();
    }
}