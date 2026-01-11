/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:50:42 by mrouissy          #+#    #+#             */
/*   Updated: 2026/01/11 13:59:30 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete(j);
delete(i);
delete(meta);

return 0;
}