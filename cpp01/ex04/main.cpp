        /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:11:26 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/02 14:41:17 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "replace.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
        return (std ::cout << "Error u need 3 args to run this program" << std ::endl,1);
    std ::string s1 = av[2];
    std ::string s2 = av[3];
    std ::string filename = av[1];

    if(s1.empty() || filename.empty())
       return (std::cout << "Error: empty string in s1 or filename " << std::endl, 1);

    std::ifstream old_file(av[1]);
    if (!old_file.is_open())
         return (std::cout << "Error: could not open file " << av[1] << std::endl, 1);

    std ::string r_file = filename + ".replace";
    std::ofstream new_file(r_file.c_str());
    if (!new_file.is_open())
         return (old_file.close(), std::cout << "Error: could not open file " << r_file << std::endl, 1);
    
    std ::string tmp;
    std ::string buffer;
    
    while (getline(old_file,tmp))
    {
        buffer += tmp;
        if(!old_file.eof())
            buffer += "\n";
    }
    replace(buffer, s1, s2);
    new_file << buffer;
    old_file.close();
    new_file.close();
    return 0;
}
