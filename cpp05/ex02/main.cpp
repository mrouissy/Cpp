/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:38:47 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 19:47:09 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::srand(std::time(0));
    /*        "RobotomyRequestForm: Required grades: sign 72, exec 45"  */

    try
    {

        /*ShrubberyCreationForm: Required grades: sign 145, exec 137*/

        // Bureaucrat boss("boss", 1);
        // ShrubberyCreationForm shrubbery(false, "Shrubbery", 145, 137, "garden");
        // std::cout << boss << std::endl;
        // boss.signForm(shrubbery);
        // boss.executeForm(shrubbery);
        // std::cout << "file Created" << std::endl;
        
        /*RobotomyRequestForm: Required grades: sign 72, exec 45*/
        // Bureaucrat boss("boss", 1);
        // RobotomyRequestForm robot(false, "Shrubbery", 145, 45, "said");
        // std::cout << boss << std::endl;
        // boss.signForm(robot);
        // boss.executeForm(robot);

        /*PresidentialPardonForm: Required grades: sign 25, exec 5*/
        Bureaucrat boss("boss", 10);
        PresidentialPardonForm pardon(false, "Shrubbery", 145, 5, "khalid");
        std::cout << boss << std::endl;
        boss.signForm(pardon);
        boss.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Unexcpected exception" << std::endl;
    }
}