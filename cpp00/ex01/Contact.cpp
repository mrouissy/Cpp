/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:55:23 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/30 06:54:15 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

// seters

void Contact :: seter_fstName(std ::string fst){
    this->_first_name = fst;
}
void Contact :: seter_lstName(std ::string lst ){
    this->_lats_name = lst;
}
void Contact :: seter_nickname(std ::string nick){
    this->_nickname = nick;
}

void Contact :: seter_phone(std :: string phone){
   this->_phone = phone;
}

void Contact :: seter_darkest_sec(std ::string sec){
    this->_darkest_secret = sec;
}

//geters

std:: string Contact :: geter_fst(void) const{
    return this->_first_name;
}

std:: string Contact :: geter_lst(void) const{
    return this->_lats_name;
}

std:: string Contact ::  geter_nick(void) const{
   return this->_nickname;
}

std:: string Contact :: geter_sec(void) const{
    return this->_darkest_secret;
}

std:: string Contact ::geter_phone(void) const{
    return this->_phone;
}
