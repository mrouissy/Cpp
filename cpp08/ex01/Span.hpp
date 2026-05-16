#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iostream>
#include <ctime>

class Span
{
private:
    Span();
    unsigned int N;
    std::vector<int> sp;
public:
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int num);

    int shortestSpan() const;
    int longestSpan() const;
};

#endif