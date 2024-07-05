//NOTE: we work with different files in a project, so there should not be clashes in the names of the variables and functions

/*
OUTSIDE STATIC:
    - static (used outside the class/struct): means that variable/function is only visible to that file/translation unit
    - static variable or function means that when it actually comes to link those actual functions or variables, to actually define the symbols,
    the linker is not going to look outside of the scope of this translation unit for that symbol definition
    - works for both variables and functions

if 2 files have same name global variable, it will give error when we build/compile the project
    - so to avoid this, we use static keyword to make the variable/function only visible to that file
    - or we can declare global variable in one file and extern it in other file (extern: it will look for that variable/function in other files called external linking) 
    - so if we have 2 files with same static variable, it will not give error

if we have a extern declared variable and in other file it is not global but static, it will raise error
    - because extern is looking for a global variable but it is not global

if we declare a static variable in a header file and include it in other files
    - what we ve actually done is created a static variable in each of the cpp files that include that header file becuz included header files are just copy-pasted

IMP POINT: try and mark your var/funct as stati unless you actaully need them to be linked accross multiple files
*/

/*
INSIDE STATIC:
    - static (used inside the class/struct): means that there will be only 1 instance of that variable/function across all instances of that class, i.e, it is shared across all instances of that class
    - so there is no point of refering this variable/function through a class instance
*/


#include <iostream>
using namespace std;

/*
//If we dont make them static
struct Entity
{
    int x, y;
    void Print()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = { 5, 8 };

    e.Print(); --> 2, 3
    e1.Print(); --> 5, 8
}
*/

//If we make them static
struct Entity
{
    static int x, y;
    void Print()
    {
        cout << x << ", " << y << endl;
    }
};

//defining static variables
int Entity::x;
int Entity::y;

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print(); //5, 8
    e1.Print(); //5, 8
    //both prints 5,8 becuz x, y are shared so first they are set to 2,3 then to 5,8. 
    //So, x, y are same 5,8 for both e and e1

    //so we can refer them as 
    Entity::x = 10;
    Entity::y = 20;
    e.Print(); //10, 20
    e1.Print(); //10, 20
    //its like we ve made 2 var x and y in a namespace called Entity, they really dont belong to the class but still part of the class
}

/*
Static methods:
    - static methods cannot access non-static variables
    - static method do not have a class instance, so they cannot access non-static variables
    - the non- static methods always gets an instance of the current class
    - so classes are just function with hidden parameter, the instance of the class
    - the static methods doesnt have this hidden parameter
*/
