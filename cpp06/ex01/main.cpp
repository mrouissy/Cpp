/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:32:58 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/29 15:16:50 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


int main()
{
    Data data;

    data.value = 15;
    data.var = "int";
    
    // uintptr_t raw = (uintptr_t)&data;
    // std::cout << raw << std::endl;

    uintptr_t uin = Serialization::serialize(&data);
    std::cout << uin << std::endl;
        
    Data *copy = Serialization::deserialize(uin);
    std::cout << copy->value << " " << copy->var << std::endl;
    return 0;
}
