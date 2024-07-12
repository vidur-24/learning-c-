/*
Constructor : 
    - it is a method that gets called everytime you create an object of a class
*/

#include <iostream>
using namespace std;

class Entity
{
public:
    float X,Y;
    Entity() //this is a constructor
    {
        X = 0.0f;
        Y = 0.0f;
    }
    // we can have as many const as we want but with different parameters
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    //there is a default constructor which is called every time but it is empty i.e, it doesnt do anything
    //like, in java, the primitive types like int and float are automatically initialized to 0, but this is not the case in cpp

    /*
    void Init()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    */

    void Print()
    {
        cout << X << ", " << Y << endl;
    }
};

class Log
{
/*
private:
    Log() {}
*/
public:
    //Log() = delete; //this will delete the default constructor
    //NOTE: if we use static methods from a class then constructor wont be called
    static void Write()
    {
    
    }
};

int main()
{
    Log::Write();
    Log l; //this will give error if constructor is private or deleted
    // if we remove pvt const then it will work cuz c++ has default const

    Entity e(10.0f,5.0f);
    //e.Init();
    //if we do not have init method then..
    //cout << e.X << endl; // ...this will give error becuz X and Y are not initialized and hence have not yet been allocated memory
    e.Print(); // ...this will print random values
    //so constructor is this init func that called everytime you construct an object
}

/*
There are also special types of constructor:
- copy constructor
- move constructor
*/