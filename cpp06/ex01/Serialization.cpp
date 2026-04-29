/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:33:37 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/29 14:40:50 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(){};
Serialization::Serialization(const Serialization& other){(void)other;}
Serialization &Serialization::operator=(const Serialization& other){(void)other;return *this;}
Serialization::~Serialization(){};


uintptr_t Serialization::serialize(Data* ptr)
{
   return reinterpret_cast<uintptr_t> (ptr) ;
}
Data* Serialization::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}