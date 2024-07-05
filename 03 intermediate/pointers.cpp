//when we run a program its codes gets loaded in the memory
//pointers are imp for managing and manipulating memory

//Pointer: it is a number/integer that stores memory address
// If we give ptr a type, we means that data at that address is pesumed to be of that type
/*
void* ptr = nullptr; // can give 0 or NULL also
//NULL is defined as 0 (#define NULL 0)
*/

#include <iostream>
#include <string.h> //for memset
#include "../memory_view.cpp" //for memory view (this code from stackoverflow for getting a look into memory like Visual Studio)
using namespace std;

int main()
{
    //NOTE: this variable is created in the stack portion of this memory
    int var = 8;
    cout<<"var(b): ";
    mem::MemView(&var); //prints memory of variable

    int* ptr = &var; //we ve stored the memory address of var in ptr
    //here type doesnt matter, it helps only in read or write
    *ptr = 10; //dereferencing: referencing a ptr to var, so we can work with  the data at that address
    //now we ve specified ptr type as int we can enter a int to the reference
    cout<<"var(a): ";
    mem::MemView(&var);

    cout<<endl;

    //NOTE: this variable is created in the heap portion of this memory
    char* buffer = new char[8]; //here we are allocated 8 bytes of memory and is returning a pointer to the 1st block of memory
    memset(buffer, 0, 8); //this will set all the 8 bytes to 0
    mem::MemView(buffer); //prints memory of buffer

    char** ptr1 = &buffer; //pointer to a pointer
    mem::MemView(ptr1); //prints memory of pointer
    //the 1st 4 bytes are the memory address of the buffer (in reverse order) in the memory of ptr

    delete[] buffer; //this will deallocate the memory
    mem::MemView(buffer);
}