/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:37:13 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 15:55:47 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std ::string first_name;
        std ::string lats_name;
        std ::string nickname;
        std ::string phone;
        std ::string darkest_secret;

    public:
        void seter_fstName(std ::string fst);
        void seter_lstName(std ::string lst);
        void seter_nickname(std ::string nick);
        void seter_phone(std ::string phone);
        void seter_darkest_sec(std ::string sec);
        std::string geter_fst(void);
        std::string geter_lst(void);
        std::string geter_nick(void);
        std::string geter_sec(void);
        int *geter_phone(void);
};

#endif
