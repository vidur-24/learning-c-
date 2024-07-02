//they make the program slow becuz it includes jumping around memory for executing staments acc to conditions

/*
SYNTAX :

if(cond1){
    //code1
}
else if(cond2){ --> there is no else if keyword , it is just if inside an else but one liner
    //code2
}
else{
    //code3
}
*/

#include <iostream>
using namespace std;

int main()
{
    int x=5;
    bool comparisionResult = x==5;
    if(comparisionResult)
    {
        cout<<"Hello World!"<<endl;
    }
    
}