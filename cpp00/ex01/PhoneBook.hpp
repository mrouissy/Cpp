/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:19:48 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/30 07:01:16 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int curr;
    public: 
        PhoneBook();
        void seter(std ::string fst,std:: string lst, std:: string nick, std:: string sec, std :: string phone);
        void Add();
        void Search();
        int Exit(void);
};

#endif

