// const is like a promise that ensures something will be const or cannot change
// with const we are basically declaring a const
#include <iostream>
using namespace std;

class Entity1
{
private:
    int m_X, m_Y;
    mutable int variable = 2; //mutable can be changed even in a const function
public:
    int GetX() const // const after the function name means this function will not change any member variable
    {
        //m_X = 2; // cant do this
        variable = 3; // can do this
        return m_X;
    }
    
    int GetX() // this is a different function than the above one
    {
        return m_X;
    }
};

class Entity2
{
private:
    int* m_X, *m_Y; //to declare as ptr each var should have * before name
public:
    const int* const GetX() const // means we are returning a ptr that cant be modified, and its content cant be modified
    {
        return m_X;
    }
};

void PrintEntity(const Entity1& e) // passing by const reference (reference means ur the content itself)
{
    //e = Entity1(); // cant do this
    cout << e.GetX() << endl; 
    // if we remove the const keyword from GetX() function, then this will give error becuz we are calling a function that can modify the entity
    // due to this sometimes we see 2 versions of a function, one with const and other with no const. so here it will use the const version of the GetX otherwise the normal one
}

int main() {
    Entity1 e;

    const int max_age = 90;
    int* a = new int; //int ptr on heap

    //a = &max_age; // cant do this cuz cannot assign const int type value to int type(non const)
    a = (int*)&max_age; // by passing the const promise (not recommended)

    const int* b = new int; //const before ptr(*) : meaning cannot change contents of the ptr 
    //*b = 2; // cant change the value
    b = (int*)&max_age; // can make the ptr to point to something else

    int* const c = new int; //const after ptr(*) : meaning cannot change the ptr
    *c = 2; // can change the value
    //c = (int*)&max_age; // cant change the ptr
    //c = nullptr; // cant change the ptr

    return 0;
}