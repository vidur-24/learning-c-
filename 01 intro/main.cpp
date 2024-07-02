#include <iostream>
#include "log.h" //including a created header file
#include "log.cpp" //to include other files
//NOTE: it creates only one executable file of main.cpp not log.cpp

void Log(const char* message); //its a funct declaration

int main()
{
    Log("Hello World!");
    std::cin.get();
} 

/*
- If there a function in another file and we are using it in the current file then, it will not compile unless there is a declaration for that function
- Declaration : are statements that state that a funct exists
- Definition : is the the actual funct or its states what the funct is
- now when we link these files it will look for the funct def, if it is unable to find then it gives linker error
*/
