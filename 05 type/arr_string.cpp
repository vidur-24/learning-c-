/*
String :
    - a grp/array of characters (letter, num, symbols)
    - there are many char encoding (ASCII, UTF-8, UTF-16, UTF-32)
    - we use ASCII encoding in C++ for char (256 char, 1 byte, 8 bit)
    - to use different languages otherthan english, we ve to use different encoding techniques
    - wide string (w string)= 2 bytes per char (wide char)
    - normal string (std string)= 1 byte per char
    - '' for char and "" for char pointer
*/

#include <iostream>
#include "../memory_view.cpp"
#include <string>
using namespace std;

int main()
{
    const char* name = "Cherno"; // C-style string
    /*
    - const mean we cant change the value of name (we do this cuz string are immutable)
    - name[2] = 'a'; // we cant do this cuz of const
    - undefined behaviour : we cant do above if there is no const also becuz in (char* name = "Cherno") it is a ptr name which points to the memory loaction of the string literal "Cherno", and they are immutable (under read-only memory section)
    - in debug mode, line 22 gives error , but in release mode it doesnt do the changes
    */
    //if we look into memory of name which stores address of our data, we can see the string is stored as array of char in ASCII encoding
    // Also at the end of the string there is a null termination character '\0' which is used to determine the end of the string
    cout<<name<<endl; //it is a pointer but it knows that string end here by this null termination character

    //NOTE: below are array of char not string
    char name2[6] = {'C', 'h', 'e', 'r', 'n', 'o'}; 
    cout<<name2<<endl; //it will print the string but it will also print the garbage value after the string cuz of no null char
    char name3[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0}; 
    cout<<name3<<endl; //it will print the string and will stop at null char
}

