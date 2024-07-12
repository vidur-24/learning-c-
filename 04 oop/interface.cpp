/*
Pure VF (Abstract Methods):
    - allow us to define a funct in base class that doesnt have implementation and then force the subclass to implement that funct
    - Interface: a class that only consists of unimplemented methods and act as a template
    - in oop, it is common to have interfaces
    - since these interface class doesnt contain method implementations, it is not possible for us to instantiate the class (create a object of the class)
    - you can only instantiate a sub-class if it actually has all those pure vf implemented

*/

#include <iostream>
#include <string>
using namespace std;

//INTERFACE
class Printable 
{
public:
    virtual string GetClassName() = 0; // = 0 makes it a pure vf
};

//ENTITY
class Entity : public Printable 
{
public:
    virtual string GetName() {return "Entity";}
    string GetClassName() override {return "Entity";}
};

//PLAYER
class Player : public Entity 
{
private: 
    string m_Name;
public:
    Player(const string& name)
        : m_Name(name) {}

    string GetName() override {return m_Name;}
    string GetClassName() override {return "Player";}
};

// prints GetName 
void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}

// completely new class of type Printable
class A : public Printable // if it is a Printable class(interface), then we need to implement GetClassName, otherwise we cannot instanciate the class
{
public:
    string GetClassName() override {return "A";}
};

// prints GetClassName
void Print(Printable* obj)
{
    cout << obj->GetClassName() << endl;
}

// MAIN
int main()
{
    Entity* e = new Entity(); // new keyword is used to allocate memory on heap
    //PrintName(e);

    Player* p = new Player("Cherno");
    //PrintName(p); 

    Print(e);
    Print(p);
    Print(new A()); // we can do this because A is a Printable class(interface
}
