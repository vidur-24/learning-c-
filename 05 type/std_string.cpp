/*
How to actually make strings in c++:
    - standard library has a class called string
    - it also has class called basic string which is a template, and std::string is the templated version of basic string class which is templated with char
    - it (std str) is a specilization of basic string class with char as template parameter, which means char is the underlying data type
*/

/*
    - string has a constructor that takes in a char ptr/const char ptr
*/

#include <iostream>
#include <string>
/* 
- iostream already has the definition of string class but to print it to console we need to include string header file
- if we do not include this string, then we get error in output stream operators (<<) telling us that we cant send the string name into the cout output
becuz overload for this operator that allows us to push string in there is inside this header file string
- we also have bunch of methods in this header file 
*/
using namespace std;

void PrintString(string string) //not recommended becuz it will create a copy, so any changes will not be reflected (pass by value)
//also not fast becuz a brand new copy is created
{
    cout<<string<<endl;
}

void PrintStr(const string& string) //recommended becuz it is pass by reference, so no copy is created and const ensure no changes
{
    cout<<string<<endl;
}

int main()
{
    string name = "Cherno"; // C++ string (std string)
    // this string name is intrinsically a const char array
    // we can implicitly convert it to char array to manipulate it

    name.size(); //size of the string
    /*
    for char pointer (char* s) we would have to use C functions like 
        - strlen(s) to get the length of the string
        - strcpy(dest, src) to copy the string
    */
    name += "Hello"; //we are actually adding a pointer to the name which is a string (+= is overload operator in string class)
    // string name = string ("Cherno") + "Hello"; //this is same as above
    // "Cherno" + "Hello" //will give error becuz we cant add 2 array/pointer together

    bool contain = name.find("no") != string::npos; //find returns the index of the string if found else it returns string::npos (npos is an illegal position)

    cout<<name<<endl; 
}