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

int convert(std :: string str, int (&phone)[10]){
    for (size_t i = 0; i < 10; i++)
    {
        if(!isdigit(str[i]))
            return -1;
        phone[i] = str[i] - '0';
    }
    return 0;
}

int main()
{
    PhoneBook book;
    std :: string fst, lst, nick, sec, ph;
    int phone[10] = {0};
    int cmd;

    while (1)
    {
        cmd = 0;
        std :: cout << "U can chose one of this Cmds\n -(1)Add to add a contact\n -(2)Search to find contact\n -(3)Exit to quit program" << std :: endl;
        std :: cin >> cmd;
        switch (cmd)
        {
            case 1:
                std :: cout << "First-Name ..." << std :: endl;
                std :: cin >> fst;
                std :: cout << "Last-Name ..." << std :: endl;
                std :: cin >> lst;
                std :: cout << "Nick-Name ..." << std :: endl;
                std :: cin >> nick;
                std :: cout << "darkest-secret ..." << std :: endl;
                std :: cin >> sec;
                std :: cout << "Phone-Number ..." << std :: endl;
                std :: cin >> ph;
                if(convert(ph, phone) == -1)
                {
                    std :: cerr << "Error:\nanvalid phone number e.g.(0600000000)" << std ::  endl;
                    continue;
                }
                book.Add(fst,lst,nick,sec,phone);
                continue;;
            case 2 :
                std :: cout << "chose index of contact 1-8" << std :: endl;
                std :: cin >> cmd;
                book.Search(cmd);
                continue;
            case 3 :
                std :: cout << "goodBuy :)" << std :: endl;
                return 0;
            default:
                std :: cerr << "Error:\nout of range" << std :: endl;
                continue;;
        }
    }
    return 0;
}
