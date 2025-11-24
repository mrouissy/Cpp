/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:19:48 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 16:23:40 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public: 
        void seter_fstName(std ::string);
        void seter_lstName(std ::string);
        void seter_nickname(std ::string);
        void seter_phone(int num[20]);
        void seter_darkest_sec(std ::string);
        void seter();
        Contact geter(void);
};

