/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:50:54 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/12 16:58:54 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constractor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destractor called" << std::endl;
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain copy Constractor called" << std::endl;   
}
Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }  
    std::cout << "Brain copy assignment called" << std::endl;
    return *this;
}

std::string* Brain::geter(void)const
{
    return (std::string*)this->_ideas;
}
void Brain::seter(std::string ideas[100])
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[i];
}