/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:33:37 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/29 14:42:52 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>
#include <string>

typedef struct data
{
    int value;
    std::string var;
} Data;



class Serialization
{
    private:
        Serialization();
        Serialization(const Serialization &other);
        Serialization& operator=(const Serialization &other);
        ~Serialization();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};






#endif