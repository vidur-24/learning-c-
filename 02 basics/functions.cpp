//functions: blocks of code to do specific task
// in classes: these functions are called methods


#include <iostream>
using namespace std;

//int is the return type of funct (void means no return)
int multiply(int a, int b) //a and b are parameter(input)
{
    return a*b; //(output)
}

void MultiplyAndLog(int a , int b) //to avoid printing again
{
    int result = multiply(a, b);
    cout<<result<<endl;
}

int main()
{
    MultiplyAndLog(3,2);
    MultiplyAndLog(5,5);
    MultiplyAndLog(8,2); 
}

//as we call funct we are jumping bw call statements and function def and funct block i.e, it jumps around memory which takes time and makes program slower
