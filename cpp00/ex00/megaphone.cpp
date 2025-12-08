/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:56:24 by mrouissy          #+#    #+#             */
/*   Updated: 2025/12/04 10:43:33 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    
    if (ac < 2)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
        return 1;        
    }
    for (int i = 1; i < ac; i++)
    {
        int len =  strlen(av[i]);
        if(len > 0)
        {
            for (int j = 0; j < len ; j++)
                std :: cout << (char)toupper(av[i][j]) ;
        }
        if( i < ac - 1)
             std :: cout << " ";
    }
    return 0;
}
