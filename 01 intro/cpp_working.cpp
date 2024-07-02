/* 
PRE PROCESSOR STATEMENTS
- preprocessor statements(#): executed before compilation to bring files into our program, after these the program is compiled
- preprocessor statement looks for a file (here iostream) and paste its functions or code into this file
- common pre pro statements are : include, define, if and ifndef
- there are also pragma statements which tell the compiler what to do
*/
#include <iostream> //pre processor directive
/*
DIFFERENT PRE PROCESSOR
- #define INTEGER int --> This pps will look for word INTEGER and replaces it with int wherever it will find it
-   #if <condition> --> This pps will execute(enable) the code only when condition true (1=enable, 0=disable)
        {functions/code}
    #endif
- #include --> This copy paste the contents of the file
NOTE: The changes can be seen in .i files
*/

/*
HEADER FILES (.h)
- header files : used to declare certain types of functs so that they can be used
- in include, we use "" for everything(usually for relative path to current directory) and <> for compiler include paths
- iostream doesnt have .h becuz cpp standard library have files that dont have extensions whereas c lang libraries have files with .h extensions 

SOME HEADER FILES:
<math.h> = pow(number, power)
<cmath> = sqrt(number)
*/

//main funtion is a special case: it return 0 by default even if we not return anything as its return type is int.
int main()
{
    // "<<" and ">>" are basicaly overloaded operators (think of them as functs)
    std::cout << "Hello World!" << std::endl;
    std::cin.get(); //get funt waits for us to push ENTER before advancing the next line of code (so that terminal doesnt closes immediately)
} 

/*
HOW C++ FILES ARE EXECUTED
- first the preprocessing of file occur in which a file is created (.i) and all header files are included in it
- if we have bunch of cpp files then each file gets compiled individually  by Compiler
- and gets converted to a object file (.obj) each for each cpp file
- we need to stitch these obj files into a executable file (.exe) which is done by Linker
*/

// error code starting with C : compiling error, starting with LNK : linking error
// a code needs to have a entry point (default is main function), if no entry point it gives lnk error

/*
static int Multiply(int a, int b) --> static will restrict this function only to the current file
{
    return a*b;
}
*/