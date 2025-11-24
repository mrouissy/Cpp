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

#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void write_cout(const char *str)
{
    for (size_t i = 0; i < 10; i++)
    {
        if(i == 9)
            std ::cout << "." << std ::endl;
        std ::cout << str[i];
    }
    
}


void PhoneBook :: Add(std ::string fst,std:: string lst, std:: string nick, std:: string sec, int phone[10]){
    if(fst.length() == 0 || lst.length() == 0 || nick.length() == 0 || sec.length() == 0 || sizeof(phone)/sizeof(phone[0]) == 0){
        std :: cerr << "Error:\none of input is empty" << std :: endl;
        return;
    }
    this->seter(fst, lst, nick, sec, phone);
}

void PhoneBook :: Search(int index){
    if(index > 8 || index < 1){
        std :: cerr << "Error:\nout of range" << std :: endl;
        return;
    }
    
    const char *fst = (this->contact[index].geter_fst()).c_str();
    const char *lst = (this->contact[index].geter_lst()).c_str();
    const char *nick = (this->contact[index].geter_nick()).c_str();

    std :: cout << index ;
    std :: cout << "|" ;
    write_cout(fst);
    std :: cout << "|" ;
    write_cout(lst);
    std :: cout << "|" ;rm -rf 
    write_cout(nick);
}   

int PhoneBook :: Exit(void){
    return -1;
}

void PhoneBook :: seter(std ::string fst,std:: string lst, std:: string nick, std:: string sec, int phone[10]){

    this->curr = sizeof(this->contact) / sizeof(this->contact[0]);
    if(curr > 7)
        curr = 1;
    this->contact[curr].seter_fstName(fst);
    this->contact[curr].seter_lstName(lst);
    this->contact[curr].seter_nickname(nick);
    this->contact[curr].seter_darkest_sec(sec);
    this->contact[curr].seter_phone(phone);
}


#endif