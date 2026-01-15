/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:50:54 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/15 14:05:18 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->templates[i] = NULL;
    //std::cout << "MateriaSource constractor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if(other.templates[i] != NULL)
            this->templates[i] = other.templates[i]->clone();
        else
            this->templates[i] = NULL;
    }
    //std::cout << "MateriaSource copy constractor called" << std::endl;    
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if(this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if(this->templates[i] != NULL)
            {
                delete this->templates[i];
                this->templates[i] = NULL;
            }
            if(other.templates[i] != NULL)
                this->templates[i] = other.templates[i]->clone();
        }
    }
    //std::cout << "MateriaSource copy assignment called" << std::endl;  
    return *this;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if(this->templates[i] != NULL)
            delete this->templates[i];
    }
    //std::cout << "MateriaSource destractor called" << std::endl;    
    
}
void MateriaSource::learnMateria(AMateria* m)
{
    if(m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if(this->templates[i] == NULL)
        {
            this->templates[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if(this->templates[i] != NULL && this->templates[i]->getType() == type)
            return this->templates[i]->clone();
    }
    return NULL;    
}