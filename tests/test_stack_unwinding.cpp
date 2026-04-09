#include <iostream>

using namespace std;

void C()
{
    int c;
    cout << "c start" << endl;
    throw 1;
    cout << "c end" << endl;
}


void B()
{
    int b;
    cout << " b start" << endl;
    C();
    cout << "b end" << endl;
}

void A()
{
    int a;
    cout << "a start" << endl;
    B();
    cout << "a end" << endl;
}

int main()
{
    try
    {
        A();
    }
    catch(int a)
    {
        cout << "4yrha" << endl;
    }
}