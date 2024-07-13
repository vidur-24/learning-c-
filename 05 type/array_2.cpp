#include <iostream>
#include "../memory_view.cpp"
using namespace std;

class Entity
{
public:
    int example[5]; // stack memory
    int count = sizeof(example)/sizeof(int); // to get number of elements of array

    //int* example = new int[5]; // heap memory
    //int count = sizeof(example)/sizeof(int); // 1, cuz sizeof(example) will give size of int pointer which is 1 byte

    Entity()
    {
        for (int i = 0; i < 5; i++)
            example[i] = 2;
    }
};

int main()
{
    Entity e;
    mem::MemView(& e); 
    cout<<e.count<<endl;
    // contains data (if stack memory used)
    //first 4 bytes ae memory address in reverse of example which contains the actual data (if heap memory used)
    // this is memory indirection (jumping from one memory location to another memory location leading to performance hit. Therefore to avoid this create the array on stack)
    //memory indirection : since we hold a pointer that points to another block of memory that hold the array, which results in memory fragmentation, cache misses, etc



    /*
    int* another = new int[5]; // dynamic memory allocation, it will allocate memory in heap, so it will not be deallocated automatically, we need to deallocate it manually
    // basically example is on stack and another is on heap, so lifetime is different i.e, example will get destroyed when we reach end of the scope, but another will not get destroyed until we deallocate it manually
    for (int i = 0; i < 5; i++)
        another[i] = 2;
    delete[] another; // deallocating the memory allocated in heap
    */
    
}

/*
- In C++ 11 we ve got 'Standard Array' which is actual inbuilt data structure in C++ library
- people prefer this over 'raw arrays' cuz it includes bound checking and keeps a track of size of array
- in heap it is no way to know the size of array
- in stack we can know the size of array : sizeof(arr)
*/

/*
int exampleSize = 5;
int example[exampleSize]; // this will give error, cuz when u allocate an array on stack, it has to be compile time known const.

so can use 'const' to make it compile time known

static const int exampleSize = 5;
int example[exampleSize]; // this will work
*/

/*
Standard Array:

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> example; // 5 is the size of array
    for (int i = 0; i < example.size(); i++)
        example[i] = 2;
}

//it does have overhead cuz it do all of the bounce checking, etc
*/