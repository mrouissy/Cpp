/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/30 15:04:44 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

bool check_number(std::string data)
{
    bool hasDecimal = false;
    bool hasF = false;
    int fPosition = -1;
    
    for (size_t i = 0; i < data.size(); i++)
    {
        if(data[i] == '.')
            hasDecimal = true;
        else if((data[i] == 'f' || data[i] == 'F'))
        {
            hasF = true;
            fPosition = i;
        }
    }
    if (hasF && !hasDecimal)
        return false;
    if (hasF && fPosition != (int)data.size() - 1)
        return false;
    
    return true;
}


void printAll(double v)
{
    std::cout << "char: ";
    if (std::isnan(v) || std::isinf(v) || v < 0 || v > 127 )
        std::cout << "impossible\n";
    else if (v < 32)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(v) << "'\n";
    
    std::cout << "int: ";
    if (std::isnan(v) || std::isinf(v) || v > INT_MAX || v < INT_MIN)
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(v) << "\n";
        
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "float: " << static_cast<float>(v) << "f\n";
    std::cout << "double: " << v << "\n";
}
void ScalarConverte::convert(std::string s)
{
    char* end;
    double v = std::strtod(s.c_str(), &end);
    
    if (s.size() == 1 && !std::isdigit(s[0]))
    {
        printAll(static_cast<double>(s[0]));
        return;
    }
    
    if (std::isnan(v) || std::isinf(v))
    {
        printAll(v);
        return;
    }
    
    if ((*end != '\0' && *end != 'f' ) || !check_number(s))
        return(std::cout << "Invalid input\n", (void)0);
    printAll(v);
    return;
    std::cout << "Invalid input\n";
}
