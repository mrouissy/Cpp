#include "Span.hpp"


void add_range(Span *span, int range)
{
    for (int i = 0; i < range; i++)
    {
        (*span).addNumber(rand());
    }
    
}


int main(int , char**)
{
    srand(time(0));

    Span span(10000);

    add_range(&span, 10000);

    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;

    
    return 0;
}
