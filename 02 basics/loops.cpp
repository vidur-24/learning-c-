/*
SYNTAX:

for(initialistion; condition; updation){
    //body
}

while(cond){
    //body
}

do{
    //body
}while(cond);
*/

#include <iostream>
#include "..\01 intro\log.cpp" //in 01 intro folder so here given relative path, can also use absolute path
using namespace std;

int main()
{
    //this code is fine 
    int i=0; //only executed once at the begin of for loop
    bool condition=true;
    for (;condition;)
    {
        Log("Hello World");
        i++; //executed after the body of for loop executed
        if(!(i<5)){
            condition=false;
        }
    }
}

/*
Control Flow statements:
- break
- continue
- return --> closes a function
*/