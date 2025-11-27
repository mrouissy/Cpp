/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:56:19 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 16:40:14 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void write_cout(std :: string str)
{
    for (int i = 0;str[i] && i < 10; i++)
    {
        if(i == 9)
            std ::cout << ".";
        else
            std ::cout << str[i];
    }
}

int convert(std :: string str, int (&phone)[10]){
    for (size_t i = 0; i < 10; i++)
    {
        if(!isdigit(str[i]))
            return -1;
        phone[i] = str[i] - '0';
    }
    return 0;
}

void print_row(std::string fst, std::string lst, std::string nick, int index)
{
    std :: cout << index ;
    std :: cout << "|" ;
    write_cout(fst);
    std :: cout << "|" ;
    write_cout(lst);
    std :: cout << "|" ;
    write_cout(nick);
}
void PhoneBook :: Add(){
    std :: string fst, lst, nick, sec, ph;
    int phone[10] = {0};
    std :: cout << "First-Name ..." << std :: endl;
    std :: getline(std :: cin, fst);
    std :: cout << "Last-Name ..." << std :: endl;
    std :: getline(std :: cin, lst);
    std :: cout << "Nick-Name ..." << std :: endl;
    std :: getline(std :: cin, nick);
    std :: cout << "darkest-secret ..." << std :: endl;
    std :: getline(std :: cin, sec);
    std :: cout << "Phone-Number ..." << std :: endl;
    std :: getline(std :: cin, ph);
    
    if(fst.length() == 0 || lst.length() == 0 || nick.length() == 0 || sec.length() == 0){
        std :: cerr << "Error:\none of input is empty" << std :: endl;
        return;
    }
    if(convert(ph, phone) == -1)
    {
        std :: cerr << "Error:\nanvalid phone number e.g.(0600000000)" << std ::  endl;
        return;
    }
    this->seter(fst, lst, nick, sec, phone);
}

void PhoneBook :: Search()
{
    int index = 0;
    std :: string input;
    
    for (int i = 0; i <= this->curr; i++)
        print_row(this->contact[i].geter_fst(), this->contact[i].geter_lst(),this->contact[i].geter_nick(), i + 1);
    std :: cout << "" << std :: endl;
    std :: cout << "chose index of contact 1-8" << std :: endl;
    std :: getline(std :: cin , input);
    if(input.length() != 1 && !isdigit(input[0]))
    {
        std :: cerr << "Error:\nanvalid input" << std :: endl;
        return;
    }
    index = input[0] - '0';
    if(index > 8 || index < 1){
        std :: cerr << "Error:\nout of range" << std :: endl;
        return;
    }
    if(this->curr == -1)
    {
        std :: cerr << "Error:\nempty book" << std :: endl;
        return;
    }
    
}   

int PhoneBook :: Exit(void)
{
    std :: cout << "goodBuy :)" << std :: endl;
    return 0;
}

void PhoneBook :: seter(std ::string fst,std:: string lst, std:: string nick, std:: string sec, int phone[10]){

    this->curr++;
    std :: cout << this->curr << std :: endl;
    if(curr > 7)
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