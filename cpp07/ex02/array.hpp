#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T> 
class Array
{
    private :
        T *data;
    public :
        Array():data(NULL){};
        Array(unsigned int n){
            if(n)
                data = new T[n];
        };
        Array(const Array& other):_arr(NULL), _size(other._size)
        {
            _arr = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _arr[i] = other._arr[i];
            
        };
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] _arr;
                _arr = new T[/*NEED SIZE */];
                for (unsigned int i = 0; i < /*ALSO SIZE*/; i++)
                    _arr[i] = other._arr[i];
            }
            return *this;
        }
};


#endif