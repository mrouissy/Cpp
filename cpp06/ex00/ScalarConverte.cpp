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


ScalarConverte::ScalarConverte()
{
    std::cout << "constractor called" << std::endl;
}
ScalarConverte::ScalarConverte(const ScalarConverte& other)
{
    (void)other;
    std::cout << "copy constractor called" << std::endl;

}
ScalarConverte &ScalarConverte::operator=(const ScalarConverte& other)
{
    (void)other;
    std::cout << "operator assignment called" << std::endl;
    return *this;
}
ScalarConverte::~ScalarConverte()
{
    std::cout << "destractor called" << std::endl;
}


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

static void print_char(char c)
{
    std::cout << "Char: ";
    if (c < 33)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << c << "'\n";

    std::cout << "int: " << static_cast<int>(c) << "\n";

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << "f\n";
    std::cout << "double: " << static_cast<double>(c)<< std::endl;
}

void print_int(std::string data)
{
    int i = std::stoi(data);

    std::cout << "Char: ";
    if(i > 127 || i < 0)
        std::cout << "imposible to convert it"  << std::endl;
    else if(i < 33)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(i) << "'\n";

    std::cout << "Int: " << static_cast<int>(i)<< "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i)  << "f\n";
    std::cout << "double: " << static_cast<double>(i)  << std::endl;
}

void print_double(std::string data)
{
    double d = std::stof(data);
    int i = static_cast<int>(d);
    if(i > 127 || i < 0)
        std::cout << "imposible to convert it"  << std::endl;
    else if(i < 33)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(i) << "'\n";

    std::cout << "Int: " << i << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d)  << "f\n";
    std::cout << "double: " << d << std::endl;

}

void print_float(std::string data)
{
    double d = std::stof(data);
    int i = static_cast<int>(d);
    if(i > 127 || i < 0)
        std::cout << "imposible to convert it"  << std::endl;
    else if(i < 33)
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(i) << "'\n";

    std::cout << "Int: " << i << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d)  << "f\n";
    std::cout << "double: " << d << std::endl;

}

void ScalarConverte::convert(std::string data)
{
    if(check_imposible(data))
        return ;
    switch (check_type(data))
    {

        case T_INT:
        {
            print_int(data);
            break;
        }
        case T_CHAR:
        {
            print_char(data[0]);
            break;
        }
        case T_FLOAT:
            break;
        case T_DOUBLE:
        {
            print_double(data);
            break;
        }
        default:
         break;
    }
    
}


