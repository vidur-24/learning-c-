/*
Inheritance: 
    - allows us to have heirarchy of classes
    - have base class which have common functionality
    - and branch off to create derived/sub class which have specific functionality
    - helps avoid code repetetion 
    - sub class can either change functionality in subtle way or introduce a new functionality
*/

#include <iostream>
using namespace std;

// BASE CLASS
class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

// SUB CLASS
class Player : public Entity // Player class now not only have type "Player" but also type "Entity"...
// means we can use Player when ever we want to use Entity
//NOTE: when we create a sub class it will contain everthing that superclass contain
// we can use this in polymorphism: idea of having multiple types for a single type
{
public:
    const char *Name;

    void PrintName()
    {
        cout << Name << endl;
    }
};

int main()
{
    cout << sizeof(Entity) << endl; // 8 bytes = 2 floats
    cout << sizeof(Player) << endl; // 12 bytes = 8 bytes for 2 floats of Entity and 4 bytes for char pointer of Player
    
}