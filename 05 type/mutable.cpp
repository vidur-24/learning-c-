// mutable keyword helps to change a variable in a const function. iT is useful becuz there might be sometimes when we only want to change this var but not others
#include <iostream>
#include <string>
using namespace std;

class Entity
{
    private:
        string m_Name;
        mutable int m_DebugCount = 0;
        public:
            const string& GetName() const
            {
                m_DebugCount++;
                return m_Name;
            }
};

int main() {
    const Entity e;
    e.GetName(); //is we dont make GetName const then we can change m_DebugCount but cannot call the function on a const object

    //use in lamda functions
    int x=8;
    // & means send everything used in this by reference
    auto f = [&]() 
    {
        x++;
        cout << x << endl;
    };
    
    // = means send everything used in this by value (the value of x remains same)
    auto f = [=]() mutable
    {
        x++; // cant do this becuz pass by reference so use mutable
        /*
        //or instead of mutable keyword u can do this (messy so not reccommended)
        auto f = [=]() mutable
        {
            y = x; //pass the value of x to y
            y++;
            cout << y << endl;
        };
        */
        cout << x << endl;
    };

    f();

    return 0;
}