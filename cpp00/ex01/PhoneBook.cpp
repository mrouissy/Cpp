/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:56:19 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/04 13:40:12 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void write_cout(std ::string str)
{
    int len = str.length();
    if (len > 10)
    {
        std ::cout << str.substr(0, 9) << ".";
    }
    else
    {
        for (int i = 0; i < 10 - len; i++)
            std ::cout << " ";
        std ::cout << str;
    }
}

void print_row(std::string fst, std::string lst, std::string nick, char index)
{
    if (index == 'q')
        write_cout ("index");
    else
    {
        for (int i = 0; i < 9; i++)
        std ::cout << " ";
        std::cout  << index;    
    }
    std::cout << "|";
    write_cout (fst);
    std::cout << "|";
    write_cout (lst);
    std::cout << "|";
    write_cout (nick);    
}

void GetInputs(std ::string *fst, std ::string *lst, std ::string *nick, std ::string *sec, std ::string *phone)
{

    std ::cout << "First-Name ..." << std ::endl;
    std ::getline(std ::cin, *fst);
    std ::cout << "Last-Name ..." << std ::endl;
    std ::getline(std ::cin, *lst);
    std ::cout << "Nick-Name ..." << std ::endl;
    std ::getline(std ::cin, *nick);
    std ::cout << "darkest-secret ..." << std ::endl;
    std ::getline(std ::cin, *sec);
    std ::cout << "Phone-Number ..." << std ::endl;
    std ::getline(std ::cin, *phone);
}

void PhoneBook ::Add()
{
    std ::string fst, lst, nick, sec, phone;
    GetInputs(&fst, &lst, &nick, &sec, &phone);
    if (fst.length() == 0 || lst.length() == 0 || nick.length() == 0 || sec.length() == 0 || phone.length() == 0)
    {
        std ::cerr << "Error:\none of input is empty" << std ::endl;
        return;
    }
    this->seter(fst, lst, nick, sec, phone);
}

void PhoneBook ::Search()
{
    int index = 0;
    std ::string input;

    std :: cout << "     index|First-name| Last-name| Nick-name"<<  std :: endl;
    for (int i = 0; i <= this->curr; i++)
        print_row(this->contact[i].geter_fst(), this->contact[i].geter_lst(), this->contact[i].geter_nick(), i + 49);//48 == '0' + 1 == index start from 1
    std ::cout << "\nchose index of contact 1-8" << std ::endl;
    std ::getline(std ::cin, input);

    if (input.length() != 1 && !isdigit(input[0]))
    {
        std ::cerr << "Error:\nanvalid input" << std ::endl;
        return;
    }

    index = input[0] - '0';
    if (index > 8 || index < 1)
    {
        std ::cerr << "Error:\nout of range" << std ::endl;
        return;
    }

    if (this->curr == -1)
    {
        std ::cerr << "Error:\nempty book" << std ::endl;
        return;
    }
    index--;
    std ::cout << "First name :" << this->contact[index].geter_fst() << std ::endl;
    std ::cout << "Last name :" << this->contact[index].geter_fst() << std ::endl;
    std ::cout << "Nick name :" << this->contact[index].geter_fst() << std ::endl;
    std ::cout << "Darkest secret :" << this->contact[index].geter_fst() << std ::endl;
    std ::cout << "First name :" << this->contact[index].geter_fst() << std ::endl;
    std ::cout << "First name :" << this->contact[index].geter_fst() << std ::endl;
}

int PhoneBook ::Exit(void)
{
    std ::cout << "goodBuy :)" << std ::endl;
    return 0;
}

void PhoneBook ::seter(std ::string fst, std::string lst, std::string nick, std::string sec, std ::string phone)
{

    this->curr++;
    if (curr > 7)
        curr = 0;
    this->contact[curr].seter_fstName(fst);
    this->contact[curr].seter_lstName(lst);
    this->contact[curr].seter_nickname(nick);
    this->contact[curr].seter_darkest_sec(sec);
    this->contact[curr].seter_phone(phone);
}

PhoneBook ::PhoneBook()
{
    this->curr = -1;
}