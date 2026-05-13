#include "iter.hpp"
#include <iostream>

void shift_right(int &var)
{
    var++;
}

void shift_left(char &c)
{
    c--;
}

int main(void)
{
    std::string name = "bcdef";

    int number[3] = {2, 3, 4};

    std::cout << "before iter\n";
    std::cout << "name = " << name << std::endl;

    std::cout << "number = ";
    for (int i = 0; i < 3; i++)
        std::cout << number[i] << " ";
    std::cout << std::endl;

    ::iter(&name[0], name.size(), shift_left);
    ::iter(number, 3, shift_right);

    std::cout << "\nafter iter\n";
    std::cout << "name = " << name << std::endl;

    std::cout << "number = ";
    for (int i = 0; i < 3; i++)
        std::cout << number[i] << " ";
    std::cout << std::endl;
}