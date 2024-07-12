/*
Destructor : 
    - runs when an object gets destroyed
    - opposite of constructor
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
        cout << "Constrcuted Entity" << endl;
    }

    ~Entity() //this is a destructor
    {
        cout << "Destroyed Entity" << endl;
    }

    void Print()
    {
        cout << X << ", " << Y << endl;
    }
};

void Funtion()
{
    Entity e;
    e.Print();
    e.~Entity(); //this will call the destructor
}
int main()
{
    Funtion(); 
    //destructor will be called when main function exits, that is when objects gets deleted
    //so we cany see, destructor message in terminal becuz program will close automatically
    //NOTE: so we made a function where this entity is created (object was created on stack) and when function exits object gets deleted and it returns to main
    cin.get();
}
