/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:56:43 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/30 07:00:41 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook book;
    std :: string cmd;


    while (1)
    {
        std :: cout << "U can chose one of this Cmds\n -(ADD) to add a contact\n -(SEARCH) to find contact\n -(EXIT) to quit program" << std :: endl;
        if(!std :: getline(std :: cin , cmd))
            return 1;
        if (cmd == "ADD")
            book.Add();
        else if (cmd == "SEARCH")
            book.Search();
        else if (cmd == "EXIT")
            return(book.Exit(), 0);
        else
            std :: cerr << "Error:\ninvalid input" << std :: endl;
    }
}
