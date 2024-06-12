#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cout<<"Input 1st numbers: ";
    cin>>n1;
    cout<<"Input 2nd numbers: ";
    cin>>n2;

    char op;
    cout<<"Enter the operator: ";
    cin>>op;

    int result;
    switch(op){
        case '+':
            result = n1+n2;
            break;
        case '-':
            result = n1-n2;
            break;
        case '*':
            result = n1*n2;
            break;
        case '/':
            result = n1/n2;
            break;
        case '%':
            result = n1%n2;
            break;
        default:
        cout<<"Enter a valid operator!!"<<endl;
    }
    cout<<"Result="<<result;
    return 0;
}