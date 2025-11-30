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
    this->first_name = fst;
}
void Contact :: seter_lstName(std ::string lst ){
    this->lats_name = lst;
}
void Contact :: seter_nickname(std ::string nick){
    this->nickname = nick;
}

void Contact :: seter_phone(std :: string phone){
   this->phone = phone;
}

void Contact :: seter_darkest_sec(std ::string sec){
    this->darkest_secret = sec;
}

//geters

std:: string Contact :: geter_fst(void){
    return this->first_name;
}

std:: string Contact :: geter_lst(void){
    return this->lats_name;
}

std:: string Contact ::  geter_nick(void){
   return this->nickname;
}
