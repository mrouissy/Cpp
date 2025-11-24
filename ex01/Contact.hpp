/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:37:13 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 15:55:47 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
    private:
        std ::string first_name;
        std ::string lats_name;
        std ::string nickname;
        int phone[20];
        std ::string darkest_secret;

    public:
        void Add();
        void Search();
        void Exit();
};
