#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->sp.reserve(N);
}

Span::~Span(){std::cout << "destractor called" << std::endl;}

Span Span::operator=(const Span& other)
{
    if(this != &other)
    {
        this->sp.reserve(other.sp.capacity());
        this->sp = other.sp;
    }

    return *this;
}

Span::Span(const Span& other)
{
    if(this != &other)
        *this = other;
}

void Span::addNumber(int num)
{
    if(this->sp.capacity() == this->sp.size())
        throw std::runtime_error("the Span is full");
    this->sp.push_back(num);
}

std::vector<int>::iterator Span::longestSpan()
{
    if(this->sp.size() <= 1)
        throw std::runtime_error("the span must be contain atless 2 number");

    return std::max_element(this->sp.begin(), this->sp.end()); 
}

std::vector<int>::iterator Span::shortestSpan()
{
    if(this->sp.size() <= 1)
        throw std::runtime_error("the span must be contain atless 2 number");

    return std::min_element(this->sp.begin(), this->sp.end()); 
}
