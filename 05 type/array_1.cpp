/*
Array:
    - to deal with lot of variables of same type instead use array
    - its just a pointer to block of memory
    - they are contiguous block of data
*/

#include <iostream>
#include "../memory_view.cpp"
using namespace std;

int main()
{
    int example[5]; // we ve allocated space for 5 int 
    // example, here, is an int pointer to that block of memory that contains that 5 int
    int* ptr = example;
    
    /*
    // memory access violation : cuz trying to access the memory location which doesnt belong to us
    // in debug mode will give error, but in release mode it will not give any error(we ve written into memory that doesnt belong to us)
    example[5] = 5; // it will not give any error, but it will not store the value in the 5th element, it will store it in the memory location after the last element of the array
    example[-1] = 1; // it will not give any error, but it will not store the value in the -1th element, it will store it in the memory location before the 1st element of the array
    */
    
    for (int i = 0; i < 5; i++) //use <5 instead of <=4, so it will have to only check less than inequality and not the equality + inequality (optimization, for better performance)
    {
        example[i] = i+1;
    }
    mem::MemView(&example); //prints memory of example

    example[2] = 5;
    *(ptr+2) = 6; // same as above line, but using pointer
    // pointer arithmetic : here ptr is a int pointer, so +2 means add 2 int size to the address of ptr = 2*4 = 8 bytes
    *(int*)((char*)ptr+8) = 7; // here we ve typecasted ptr to char pointer, so +8 means add 8 char size to the address of ptr = 8 bytes (same as above line, but using char pointer). Also need to cast it back into int pointer to store the value

    mem::MemView(&example);

    cout << example[0] << endl;
    cout << example << endl; // it will print the address of array(also of 1st element), as it is a pointer(pointer type) to the first element of the array

}