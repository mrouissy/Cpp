/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 20:33:46 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/01 17:15:09 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <cstdio>

int main()
{
    std::string mystr = "HI THIS IS BRAIN";
    std::string* stringPTR = &mystr;
    std::string& stringREF = mystr;

    // Addresses
    std::cout << "The memory address of the string variable:" << &mystr 
    << "\nThe memory address held by stringPTR:" <<  stringPTR << "\nThe memory address held by stringREF:"
    <<  &stringREF << std :: endl;
    
    // Values
    std::cout << "The value of the string variable:" << mystr.c_str()
    << "\nThe value pointed to by stringPTR:" <<  stringPTR->c_str()
    << "\nThe value pointed to by stringREF:" <<  stringREF.c_str() << std :: endl;


    return 0;
}

