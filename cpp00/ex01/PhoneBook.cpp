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
    if(!std ::getline(std ::cin, *fst))
        return;
    std ::cout << "Last-Name ..." << std ::endl;
    if(!std ::getline(std ::cin, *lst))
        return;
    std ::cout << "Nick-Name ..." << std ::endl;
    if(!std ::getline(std ::cin, *nick))
        return;
    std ::cout << "darkest-secret ..." << std ::endl;
    if(!std ::getline(std ::cin, *sec))
        return;
    std ::cout << "Phone-Number ..." << std ::endl;
    if(!std ::getline(std ::cin, *phone))
        return;
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
    for (int i = 0; i < this->_size; i++)
        print_row(this->_contact[i].geter_fst(), this->_contact[i].geter_lst(), this->_contact[i].geter_nick(), i + 49);//48 == '0' + 1 == index start from 1
    std ::cout << "\nchose index of contact 1-8" << std ::endl;
    std ::getline(std ::cin, input);

    if (input.length() != 1 && !isdigit(input[0]))
    {
        std ::cerr << "Error:\nanvalid input" << std ::endl;
        return;
    }

    index = input[0] - '0';
    if (index > 8 || index < 1 || index > this->_size )
    {
        std ::cerr << "Error:\nout of range" << std ::endl;
        return;
    }

    if (this->_curr == -1)
    {
        std ::cerr << "Error:\nempty book" << std ::endl;
        return;
    }
    
    index--;
    
    std ::cout << "First name :" << this->_contact[index].geter_fst() <<
    "\nLast name :" << this->_contact[index].geter_fst() <<
    "\nNick name :" << this->_contact[index].geter_fst() <<
    "\nDarkest secret :" << this->_contact[index].geter_fst() <<
    "\nPhone number :" << this->_contact[index].geter_phone() << std ::endl;
}

int PhoneBook ::Exit(void)
{
    std ::cout << "goodBuy :)" << std ::endl;
    return 0;
}

void PhoneBook ::seter(std ::string fst, std::string lst, std::string nick, std::string sec, std ::string phone)
{

    this->_curr++;
    if(this->_size < 8)
        this->_size++;
    if (this->_curr == 8)
        this->_curr = 0;
    this->_contact[this->_curr].seter_fstName(fst);
    this->_contact[this->_curr].seter_lstName(lst);
    this->_contact[this->_curr].seter_nickname(nick);
    this->_contact[this->_curr].seter_darkest_sec(sec);
    this->_contact[this->_curr].seter_phone(phone);
}

PhoneBook ::PhoneBook()
{
    this->_curr = -1;
    this->_size = 0;
}