/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Empty.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:29:42 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/30 11:27:13 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPTY_HPP
#define EMPTY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>


class Base{
    public:
    virtual ~Base();
};

class A: public Base{};
class B: public Base{};
class C: public Base{};
#endif