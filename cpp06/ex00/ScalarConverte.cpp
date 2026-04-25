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
    else if(data.size() == 1 && (data[0] < 0 || data[0] > 127 || data[0] == '\0' ))
    {
        std::cout << "imposible" << std::endl;
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
    if(data.size() == 1)
        return T_CHAR;
    else if(is_all_digit(data))
        return T_INT;
    else if(dot != std::string::npos)
    {
        if(data[dot + 1] == 'f' && data[dot + 2] == '\0' )
            return T_FLOAT;
        else
            return T_DOUBLE;
    }
    return ERROR;
}

void print_data(char c, int i, double d, float f)
{
    if(c < 32)
        std::cout << "Char  : Non printabal char " << std::endl;
    else
        std::cout << "Char  :  "  << c << std::endl;
        
    std::cout << "Int   :  "  << i << std::endl;
    std::cout << "Double:  "  << d << std::endl;
    std::cout << "Float :  "  << f << "f" << std::endl;

}
void char_type(std::string data)
{
    
    if(!isdigit(data[0]))
    {
        print_data(data[0], static_cast<int>(data[0]), static_cast<double>(data[0]), static_cast<float>(data[0]));
        return ;
    }
        
}

void ScalarConverte::convert(std::string data)
{
    if(check_imposible(data))
        return ;
    switch (check_type(data))
    {
    case T_CHAR:
        char_type(data);
        break;
    case T_INT:
        break;
    case T_FLOAT:
        break;
    case T_DOUBLE:
        break;
    default:
        break;
    }
    
}
        