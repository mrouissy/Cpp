/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/21 13:14:13 by mrouissy         ###   ########.fr       */
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


void print_data(char c, int i, float f, double d)
{
    if(c == -1 )
    {
        std::cout << "unvalid data." << std::endl;
        return ;
    }
    std::cout << "char : "   << c << std::endl;
    std::cout << "int : "    << i << std::endl;
    std::cout << "float : "  << f << std::endl;
    std::cout << "double : " << d << std::endl;
}
int check_type(std::string data)
{
    if(data.length() == 1 && !isdigit(0))
        return T_CHAR;
    else if(data.find('.'))
    {
        if(data[data.size() - 1] == 'f')
            return T_FLOAT;
        else
            return T_DOUBLE;
    }
    return T_INT;
} 
int char_convert(std::string data)
{
    const char *tmp = data.c_str();
    if(tmp[0] <33 || tmp[0] > 126)
    {
        std::cout << "Non-printable characters." << std::endl;
        return -1;
    }
    return static_cast<char>(tmp[0]);
}

void ScalarConverte::convert(std::string data)
{
    char c; int i;
    if(data.empty())
    {
        std::cout << "string is empty." << std::endl;
        return;
    }
    switch (check_type(data))
    {
        case T_CHAR:
            c =char_convert(data);
            break;
        case T_INT:
            /* code */
            break;
        case T_FLOAT:
            /* code */
            break;
        case T_DOUBLE:
            /* code */
            break;
        default:
            break;
    }
    
    print_data(c,c,c,c);
}
        