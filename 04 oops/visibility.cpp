/*
Visibility:
    - it refers to ho visible the members/method of a class are 
    - visible means who can see them, call them and use them
    - it has no effect on  how ur program actually runs or on program performance
*/

/*
3 basic visbility monitors in C++ :
    - private: members are only accessible within the class or friend class
    - protected: members are accessible within the class and its sub-classes
    - public: members are accessible to outside the class or throughtout the translation unit

*/

#include <iostream>
using namespace std;

class Entity
{
private: 
    int X, Y;

    void Print() {}
public:
    Entity() //this is a constructor
    {
        X = 0;
        Print(); // we can call private/protected/public method inside the class
    }
};

class Player : public Entity
{
public:
    Player()
    {
        // X = 2; // error: 'int Entity::X' is private within this context
        // Print(); // error: 'void Entity::Print()' is private within this context
        //we can call these if visibility is protected/public as it is a sub-class
    }
};

int main()
{
    Entity e;
    // e.X = 2; // error: 'int Entity::X' is private/protected within this context
    // e.Print(); // error: 'void Entity::Print()' is private/protected within this context
}