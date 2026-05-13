#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template <typename mi>
mi min(mi param1, mi param2)
{
	return (param1 < param2) ? param1 : param2;
}

template <typename ma>
ma max(ma param1, ma param2)
{
return (param1 > param2) ? param1 : param2;
}

#endif