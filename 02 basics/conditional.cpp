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

/*
switch(var){
    case //constant or expression:
        //code
        break;
    default: //if no value in case matches then default
}

//in switch cases if we dont add breaks then after a case gets matched all the statements of the case after that case gets executed
*/