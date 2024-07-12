/*
Virtual Funtions:
    - allow to override methods in subclass
    - vf introduce something called dynamic dispatch which compiles typically implement using vtable
    - vtable is a table of function pointers (copilot definition)
    - vtable is a table which contains a mapping of all the virtual functions inside the base class, so that we can actually map them to the correct overriden function in the subclass
    - so if we want to override a funct, we ve to mark the base funct in base class as virtual

*/

#include <iostream>
#include <string>
using namespace std;

class Entity //BASE CLASS
{
public:
    virtual string GetName() // virtual keyword tells the compiler to create a vtable for this funct so that if its overriden you can point to the correct funct
    {
        return "Entity"; 
    }
};

class Player : public Entity //SUB CLASS
{
private: 
    string m_Name;
public:
    Player(const string& name)
        : m_Name(name) {}

    string GetName() override // override keyword (not necessary) tells the compiler that this funct is meant to override a funct in the base class 
    // override gives error if there is no funct in base class to override or if the funct is not virtual
    {
        return m_Name;
    }
};

void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl; // -> is the . operator for pointers
}

int main()
{
    Entity* e = new Entity(); // new keyword is used to allocate memory on heap
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p); 
    // gives output as Entity (if not a vf) but it is a Player object so expected to run display of Player class
    // now PrintName() takes type Entity, so it will call GetName() of Entity class

}

/*
Virtual Funtions are not free, they ve 2 costs associated with them:
    - additional memory required for vtable so that we can dispatch to the correct funct that includes a member pointer in the actual base class that points to the vtable
    - additional time required to call the funct because we ve to go through the vtable to determine whch funct to actually map to, which is also performance penalty
*/
