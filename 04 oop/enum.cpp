/*
Enumeration (enum) : 
    - means giving names to values
    - group variables under a single name
*/ 

#include <iostream>
using namespace std;

enum Example :  char //its data type, default is int32
    {
        A=5, B, C=3 //if we do not assign values it will be increment of prvs, default first will be 0 if not initialized
    };

int main()
{
    Example value = B;

    if(value == B)
    {
        cout << B << endl;
    }
}