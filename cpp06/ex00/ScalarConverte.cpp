/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/25 14:33:15 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include <cmath>
#include <limits>


bool check_imposible(std::string data)
{
    if(data.empty())
    {
        std::cout << "string is empty." << std::endl;
        return true;
    }
    else if(data.size() == 1 &&  data[0] == '\0' )
    {
        std::cout << "imposible to convert it"  << std::endl;
        return true;
    }
    return false;
}

bool is_all_digit(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (!::isdigit(str[i])) return false;
    }
    return true;
}

int check_type(std::string data)
{
    // Check for pseudo-literals first
    if (data == "nan" || data == "+inf" || data == "-inf")
        return T_DOUBLE;
    if (data == "nanf" || data == "+inff" || data == "-inff")
        return T_FLOAT;
    
    size_t dot = data.find('.');
    if(is_all_digit(data))
        return T_INT;
    else if(data.size() == 1)
        return T_CHAR;
    else if(dot != std::string::npos)
    {
        if(data[dot + 1] == 'f' && data[dot + 2] == '\0' )
            return T_FLOAT;
        else
            return T_DOUBLE;
    }
    return ERROR;
}

static void print_all(double value)
{
    // Print char
    std::cout << "Char: ";
    if (std::isnan(value) || std::isinf(value))
        std::cout << "impossible\n";
    else
    {
        int i = static_cast<int>(value);
        if(i > 127 || i < 0)
            std::cout << "impossible\n";
        else if(i < 33)
            std::cout << "Non displayable\n";
        else
            std::cout << "'" << static_cast<char>(i) << "'\n";
    }

    // Print int
    std::cout << "Int: ";
    if (std::isnan(value) || std::isinf(value))
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(value) << "\n";
    
    // Print float and double with formatting
    std::cout << std::fixed << std::setprecision(1);
    float f = static_cast<float>(value);
    if (std::isnan(f))
        std::cout << "float: nanf\n";
    else if (std::isinf(f))
        std::cout << "float: " << (f > 0 ? "+inff" : "-inff") << "\n";
    else
        std::cout << "float: " << f << "f\n";
    
    if (std::isnan(value))
        std::cout << "double: nan\n";
    else if (std::isinf(value))
        std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << "\n";
    else
        std::cout << "double: " << value << std::endl;
}

static void print_char(char c)
{
    std::cout << "Char: ";
    if (c < 33)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << c << "'\n";

    std::cout << "Int: " << static_cast<int>(c) << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << "f\n";
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverte::convert(std::string data)
{
    if(check_imposible(data))
        return ;
    switch (check_type(data))
    {
        case T_INT:
            print_all(static_cast<double>(std::stoi(data)));
            break;
        case T_CHAR:
            print_char(data[0]);
            break;
        case T_FLOAT:
            print_all(std::stof(data));
            break;
        case T_DOUBLE:
            print_all(std::stof(data));
            break;
        default:
            break;
    }
}


