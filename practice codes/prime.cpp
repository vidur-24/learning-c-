#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int n;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    
    if(flag==true){
        cout<<"Is a Prime number!";
    }
    else{
        cout<<"Is not a Prime number!";
    }

    return 0;
}