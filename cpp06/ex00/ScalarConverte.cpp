/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/20 15:34:29 by mrouissy         ###   ########.fr       */
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
}
ScalarConverte::~ScalarConverte()
{
    std::cout << "destractor called" << std::endl;
}


void print_data(char c, int i, float f, double d)
{
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

void ScalarConverte::convert(std::string data)
{
    std::stoi(data);
    if(data.empty())
    {
        std::cout << "string is empty." << std::endl;
        return;
    }
    
}
        