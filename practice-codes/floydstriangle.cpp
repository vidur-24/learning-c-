/*
row=5
    1  2  3  4  5

1   1
2   2  3
3   4  5  6
4   7  8  9  10 
5   11 12 13 14 15
*/

#include <iostream>
using namespace std;

int main(){
    int row;
    cin>>row;\
    int count =1;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}