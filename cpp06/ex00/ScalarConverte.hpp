/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:33:27 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/25 14:16:59 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE
#define SCALARCONVERTE

#include <iostream>
#include <algorithm>
#define T_INT    0
#define T_CHAR   1
#define T_FLOAT  2
#define T_DOUBLE 3
#define ERROR -1


class ScalarConverte
{
    private:
        ScalarConverte();
        ScalarConverte(const ScalarConverte& other);
        ScalarConverte &operator=(const ScalarConverte& other);
        ~ScalarConverte();
    public:
        static void convert(std::string data);
        
};


#endif