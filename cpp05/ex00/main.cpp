/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:38:47 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/09 14:45:54 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat chablo("medd", 0);
        std::cout << chablo << std::endl;
        chablo.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // try
    // {
    //     Bureaucrat b("said", 150);
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat invalid("simhamed", 0);
    //     std::cout << invalid << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat w("lala fakhita", 2);
    //     std::cout << w << std::endl;
    //     w.incrementGrade();
    //     std::cout << w << std::endl;
    //     w.decrementGrade();
    //     std::cout << w << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}