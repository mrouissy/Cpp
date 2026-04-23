/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/23 14:39:54 by mrouissy         ###   ########.fr       */
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


// void print_data(char c, int i, float f, double d)
// {
//     if(c == -1 )
//     {
//         std::cout << "unvalid data." << std::endl;
//         return ;
//     }
//     std::cout << "char : "   << c << std::endl;
//     std::cout << "int : "    << i << std::endl;
//     std::cout << "float : "  << f << std::endl;
//     std::cout << "double : " << d << std::endl;
// }
// int check_type(std::string data)
// {
//     if(data.length() == 1 && !isdigit(0))
//         return T_CHAR;
//     else if(data.find('.'))
//     {
//         if(data[data.size() - 1] == 'f')
//             return T_FLOAT;
//         else
//             return T_DOUBLE;
//     }
//     return T_INT;
// } 

void char_convert(std::string data)
{
    const char *tmp = data.c_str();
    if(tmp[0] < 33)
    {
        std::cout << "Non-printable characters." << std::endl;
        return;
    }
    std::cout << "char : " << static_cast<char>(tmp[0])<< std::endl;;
}

bool check_imposible(std::string data)
{
    if(data.empty())
    {
        std::cout << "string is empty." << std::endl;
        return true;
    }
    else if(data[0]<0 || data[0] > 127 || data[0] == '\0')
    {
        std::cout << "imposible" << std::endl;
        return true;
    }
    return false;
}
void int_convert(std::string data)
{
    char *rest;
    int to_cast = strtod(data.c_str(), &rest);

    if(rest && rest != "f")
    {
        std::cout << "can't  convert. " << std::endl;
        return ;
    }
    std::cout << "int :" << static_cast<int>(to_cast) << std::endl;
}
void float_convert(std::string data)
{
    char *rest;
    int to_cast = strtod(data.c_str(), &rest);
    if(data.find('.'))
    {
        if(rest != "f")
        {
            std::cout << "imposible" << std::endl; 
            return;
        }
        std::cout << "float: " << static_cast<float>(to_cast) << "f" << std::endl; 
    }
    else if(!rest)
    {
        std::cout << "float: " << static_cast<float>(to_cast) << ".f" << std::endl; 
        return;
    }
    else if(rest == "nanf" || "nan")
    {
        std::cout << "float: nanf" << std::endl; 
    }
    else
        std::cout << "imposible " << std::endl;
}
void ScalarConverte::convert(std::string data)
{
   
    if(check_imposible(data))
        return ;
    char_convert(data);
    
}
        