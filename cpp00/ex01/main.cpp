/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:56:43 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 16:02:54 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook book;
    int cmd;

    while (1)
    {
        cmd = 0;
        std :: cout << "U can chose one of this Cmds\n -(1)Add to add a contact\n -(2)Search to find contact\n -(3)Exit to quit program" << std :: endl;
        std :: cin >> cmd;
        switch (cmd)
        {
            case 1:
                book.Add();
                continue;;
            case 2 :
                book.Search();
                continue;
            case 3 :
                book.Exit();
                return 0;
            default:
                std :: cerr << "Error:\nout of range" << std :: endl;
                continue;;
        }
    }
    return 0;
}
