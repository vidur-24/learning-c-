//An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits.
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int num_copy=n;

    while(n>0){
        int d = n%10;
        sum += pow(d, 3);
        n=n/10;
    }

    if(sum==num_copy){
        cout<<"Armstrong Num!!";
    }
    else{
        cout<<"Not Armstrong";
    }
}