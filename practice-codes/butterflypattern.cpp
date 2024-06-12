/*
row=4
    1 2 3 4 4 3 2 1
  1 *             *
  2 * *         * *
  3 * * *     * * *
  4 * * * * * * * *
  4 * * * * * * * *
  3 * * *     * * *
  2 * *         * *
  1 *             *

*/

#include <iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=2*(row-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
//for reversing the pattern reverse the first loop
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=2*(row-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}