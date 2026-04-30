/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:36:47 by mrouissy          #+#    #+#             */
/*   Updated: 2026/04/30 11:34:27 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Empty.hpp"

class Wrong : public Base {};

Base *generate(void)
{   
    switch (rand() % 3)
    {
    case 0:
        return new A();
        break;
    case 1:
        return new B();
        break;
    case 2: 
        return new C();
        break;
    default:
        break;
    }
    return NULL;
}
void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        return (std::cout<<"obj type: A" << std::endl,(void)0);
    if(dynamic_cast<B*>(p))
        return (std::cout<<"obj type: B" << std::endl,(void)0);
    if(dynamic_cast<C*>(p))
        return (std::cout<<"obj type: C" << std::endl,(void)0);
    std::cout << "unknow type" << std::endl;
}

void identify(Base& p)
{
    try
    {
       (void)dynamic_cast<A &>(p);
       return (std::cout<<"obj type: A" << std::endl,(void)0);
    }catch(const std::exception& e){}
    try
    {
       (void)dynamic_cast<B &>(p);
       return (std::cout<<"obj type: B" << std::endl,(void)0);
    }catch(const std::exception& e){}
    try
    {
       (void)dynamic_cast<C &>(p);
       return (std::cout<<"obj type: C" << std::endl,(void)0);
    }catch(const std::exception& e){}
}

int main()
{
    srand(time(0));

	Base *base = generate(); 
	identify(base);
	identify(*base);
	delete base;

	// Test with Wrong.
	Wrong wrong;
	identify(&wrong);
	identify(wrong);

	// Test with NULL.
	Base *null = NULL;
	identify(null);
    return 0;
}
