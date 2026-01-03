/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:40:40 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/02 14:40:40 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace(std::string &buffer, const std::string &s1, const std::string &s2)
{
    size_t start = 0;
    while ((start = buffer.find(s1, start)) != std::string::npos)
    {
        buffer.erase(start, s1.length());
        buffer.insert(start, s2);
        start += s2.length();
    }
}
