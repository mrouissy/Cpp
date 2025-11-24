/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:56:24 by mrouissy          #+#    #+#             */
/*   Updated: 2025/11/24 15:16:23 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    
    if (ac != 2)
    {
        std :: cout << "Error:\n empty string" << std :: endl;
        return 1;        
    }
    size_t len =  strlen(av[1]);
    if(len > 0)
    {
        for (size_t i = 0; i < len ; i++)
            std :: cout << (char)toupper(av[1][i]) ;
        return 0;
    }
    std :: cout << "Error:\n empty string" << std :: endl;
    return 1;  
}
