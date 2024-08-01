/*
String Literal:
    - anything inside "" is a string literal
    - what it actuallly becomes depends on num of factors. In basic level, it is a const char array with one extra element at the end which is null termination character (\0)
    - it is always stored in read-only memory section of the program
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
    char* name = "Cherno"; // if we hover it shows const char pointer (bad practice)
    //to compile code with the char pointer we ve to type cast it into it
    char* name = (char*)"Cherno";
    Therefore,
    - name[2] = 'a'; // we cant do this cuz of const
    - undefined behaviour : we cant do above if there is no const also becuz in (char* name = "Cherno") it is a ptr name which points to the memory loaction of the string literal "Cherno", and they are immutable (under read-only memory section)
    - in debug mode, line 22 gives error , but in release mode it doesnt do the changes
    */
    /*
    to do change we can change it into an array
    char name[] = "Cherno";
    name[2] = 'a'; //this will work
    */

    const char* namee = u8"Cherno"; //we can give a u8 prefix to const char ptr (utf8)
    const wchar_t* name2 = L"Cherno"; //this is a wide char const pointer and L infront of literal signifies that its made up of wide char
    //diff bw wchar and char16 is that, in wchar it depends on the compiler how much space it wants to give per char 
    //usually in windows it is 2 bytes and on mac and linux it is 4 bytes
    const char16_t* name3 = u"Cherno"; //16 bit or 2 bytes per char (utf16)
    const char32_t* name4 = U"Cherno"; //32 bit or 4 bytes per char (utf32)

    //concatenation contd..
    //NOTE: if we dont add using namespace std; then we ve to put std:: before each  keyword 'string' or 'string_literals'
    using namespace string_literals;

    string name0 = string("Cherno") + "Hello"; //this string() is a constructor that makes the literal into actual string
    //alternative:
    //string name0 = "Cherno"s + "hello"; // 's' is a operator that returns a std string
    /*
    others char types:
    wstring name0 = L"Cherno"s + L"hello";
    u16string name0 = u"Cherno"s + u"hello";
    u32string name0 = U"Cherno"s + U"hello";
    */

    //multi line str
    const char* example = R"(Line1
    Line2
    Line3)"; //this R(role) means to ignore escape char
    //another way
    const char* ex = "Line1\n"
    "Line2\n"
    "Line3\n";
    cout<<ex<<endl;


}
