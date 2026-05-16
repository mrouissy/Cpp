#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
    sp.reserve(n);
}

Span::~Span() {}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->sp = other.sp;
    }
    return *this;
}

Span::Span(const Span& other)
{
    *this = other;
}

void Span::addNumber(int num)
{
    if (sp.size() >= N)
        throw std::runtime_error("the Span is full");
    sp.push_back(num);
}



int Span::longestSpan() const
{
    if (sp.size() <= 1)
        throw std::runtime_error("the span must contain at least 2 numbers");
    std::vector<int>::const_iterator it_min = std::min_element(sp.begin(), sp.end());
    std::vector<int>::const_iterator it_max = std::max_element(sp.begin(), sp.end());
    return *it_max - *it_min;
}

int Span::shortestSpan() const
{
    if (sp.size() <= 1)
        throw std::runtime_error("the span must contain at least 2 numbers");
    std::vector<int> tmp = sp;
    std::sort(tmp.begin(), tmp.end());
    int min_diff = std::numeric_limits<int>::max();
    for (size_t i = 1; i < tmp.size(); ++i)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}
