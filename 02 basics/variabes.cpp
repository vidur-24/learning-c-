// Just like C variables get the memory allocated by their data type

#include <iostream>
using namespace std;

int main()
{
    float variable = 5.5f; //if we hover over 5.5 it says double. To actually declare float after 5.5 put f/F.
    double var = 5.2;

    cout<<var<<endl;
    cout<<sizeof(variable)<<endl; //gives memory accquired by variable
    //int* gives pointers
    //int& gives references
}

//we can put long, unsigned, signed before ny float or int type data
// ex: long double 

/*
DATA TYPES: 

    - Primitive
        1. integer - 4 bytes
            i. signed 
            ii. unsigned
            iii. long - 8 bytes
            iv. short - 2 bytes
        2. float
            i. float - 4 bytes (7 decimal)
            ii. double - 8 bytes (15 decimal)
        3. character - 1 bytes
        4. boolean - 1 bytes
    - Derived
        1. function
        2. array
        3. pointers
        4. reference
    - User-defined
        1. class
        2. structure
        3. union
        4. enum
*/