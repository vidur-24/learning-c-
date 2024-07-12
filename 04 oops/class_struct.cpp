/*
    - C doesnt offer OOPs cuz it doesnt have concept of classes and objects while C++ does
    - Classes are way to group data and functionalty together
    - C++ doesnt restrict with OOP unlike java or C# which are pure OOP languages
*/

/*
    - variables made from a class type are called objects
    - here player1 is an object of class Player
    - and a new object variable is called an instance
    - so here we ve intanciated a new PLayer object or created a new instance of that Player type
*/

#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

class Player
{
public: //we can  acccess these variables outside the class
    int x,y;
    int speed;

    //function specific to player class
    //having function inside the class is called a method and is a cleaner way than to write outside
    void Move(int xa, int ya) // xa = x amount moved
    {
        x += xa * speed;
        y += ya * speed;
    }
    //so basically, classes allow us to grp variables together into a type and add a functionality to them
};

/*
    - Visibility: when u create a new class, you ve the option to specify how visible the stuff in the class is
    - by default, a class makes everything private, which means functions only inside that class can actually access those variables
*/

/*
    - If Move function have been defined outside the class
void Move(Player& player, int xa, int ya) // xa = x amount moved
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}
*/

int main()
{
    Player player1;
    player1.x = 5;
    player1.Move(1, -1);
    
}

/*
Difference between struct and class in C++:
    - in class, everything is private by default (visibility)
    - in struct, everything is public by default
*/

/*
    - in struct, to make visibility private we write "private:" instead of "public:"
    - and "struct" in place of "class"
    - struct exist due to backward compatability with C cuz C has struct but not class
*/