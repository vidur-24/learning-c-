/*
String Literal:
    - anything inside "" is a string literal
    - what it actuallly becomes depends on num of factors. In basic level, it is a const char array with one extra element at the end which is null termination character (\0)
    - it is stored in read-only memory section of the program
    - 
*/

#include <iostream>
#include <string>
#include <cstring> //include c string functions
using namespace std;

int main()
{
    "Cherno"; //string literal
    const char name[8] = "Che\0rno"; // null term in bw will break the behaviour of the string literal
    cout << strlen(name) << endl; // will give 3 as output becuz strlen stops at null term char
    //we could have also declared a const char ptr (const char* name = "Che\0rno";) instead of const char arr

    /*
    char* name = "Cherno"; // if we hover it shows const char pointer
    //to compile code with the char pointer we ve to type cast it into it
    char* name = (char*)"Cherno";
    */
    
    /*
    - name[2] = 'a'; // we cant do this cuz of const
    - undefined behaviour : we cant do above if there is no const also becuz in (char* name = "Cherno") it is a ptr name which points to the memory loaction of the string literal "Cherno", and they are immutable (under read-only memory section)
    - in debug mode, line 22 gives error , but in release mode it doesnt do the changes
    */
}
