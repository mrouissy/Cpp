#include "easyfind.hpp"
#include <deque>
#include <exception>
#include <iostream>
#include <list>
#include <vector>

int main(int, char **)
{
	int exist = 20 , not_exist = 25;

	std::cout << "-------------test for vector-------------------" << std::endl;
	
	{
		std::vector<int> number_vec;

		for (int i = 0; i < 50; i += 10)
			number_vec.push_back(i);
		std::vector<int>::iterator it = number_vec.end();
		try
		{
			it = easyfind(number_vec, exist);
			it = easyfind(number_vec, not_exist);
			
		}
		catch (const std::exception &e)
		{
			std::cerr << not_exist <<" "<< e.what() << std::endl;
		}

		if (it != number_vec.end())
			std::cout << *it << " was found" << std::endl;
	}
	
	std::cout << "-------------test for list-------------------" << std::endl;
	
	{	
		std::list<int> number_lst;

		for (int i = 50; i > 0; i -= 10)
			number_lst.push_front(i);

		std::list<int>::iterator it = number_lst.end();
		try
		{
			it = easyfind(number_lst, exist);
			it = easyfind(number_lst, not_exist);

		}
		catch(const std::exception& e)
		{
			std::cerr << not_exist <<" "<< e.what() << std::endl;
		}
		if (it != number_lst.end())
				std::cout << *it << " was found" << std::endl;
	}
	
	std::cout << "-------------test for deque-------------------" << std::endl;
	
	{
		std::deque<int> number_lst;
		for (int i = 10; i < 50; i += 10)
			number_lst.push_front(i);
		std::deque<int>::iterator it = number_lst.end();
		try
		{
			it = easyfind(number_lst, exist);
			it = easyfind(number_lst, not_exist);
		}
		catch(const std::exception& e)
		{
			std::cerr<<not_exist << " " << e.what() << std::endl;
		}
		if(it != number_lst.end())
			std::cout << *it <<	 " was found" << std::endl;
	}
	
	return 0;
}
