#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>

class Span
{
private:
    Span(); /// def constractor
    std::vector<int> sp;
public:
    Span(unsigned int N); // p constractor
    Span(const Span& other); // copy constractor
    Span operator=(const Span& other); // operator overloading
    
    void addNumber(int num);
   
    std::vector<int>::iterator shortestSpan();
    std::vector<int>::iterator longestSpan();



    ~Span();
};

#endif