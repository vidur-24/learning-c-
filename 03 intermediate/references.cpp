/*
- References have to reference to an already existing variable
- references themselves are not new variables
*/

#include <iostream>
#include "../01 intro/log.cpp" //for log and print
#include <string.h> //for memset
#include "../memory_view.cpp" //for memory view (this code from stackoverflow for getting a look into memory like Visual Studio)
using namespace std;


void Increment_P(int* value)
{
    (*value)++;
}

void Increment_R(int& value)
{
    value++;
}

int main()
{
    int a = 5;
    int& ref = a; //reference to a (it is like an alias)
    //when you declare a reference you have to immediately initialize it
    ref = 2; //a=2
    print(a); 

    // Pass a variable by reference using pointer
    Increment_P(&a); //a=3
    print(a);

    // Pass a variable by reference using reference
    Increment_R(a); //a=4
    print(a);
}

/*
//We can change point to point to a different variable 
//but we can't change the reference to reference to a different variable

//Pointer
int a = 5;
int b = 8;
int* ref = &a; //ref pointing to a
*ref = 2; //changing value of a
int* ref = &b; //now ref pointing to b
*ref = 1; /changing value of b

//Reference
int a = 5;
int b = 8;
int& ref = a; //ref referencing a
ref = b; //doesnt refer to b instead changes value of a to b i.e, a=8 and b =8
*/