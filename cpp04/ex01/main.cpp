/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:50:42 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/12 17:28:45 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"



int main()
{

    Animal* animal[10];
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            std::cout << "\n=== Cat " << i + 1 << " ideas ===" << std::endl;
            std::string* ideas_cat = animal[i]->getBrain();
            if (ideas_cat)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << ideas_cat[j] << std::endl;
                }
            }
        }
        else
        {
            std::cout << "\n=== dog " << i - 4 << " ideas ===" << std::endl;
            std::string* ideas_dog = animal[i]->getBrain();
            if (ideas_dog)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << ideas_dog[j] << std::endl;
                }
            }
        }        
    }
    
    std::cout  << std::endl;
    for (int i = 0; i < 10; i++)
        delete animal[i];
    
    return 0;
}