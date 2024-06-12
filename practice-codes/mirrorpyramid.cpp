/*
row=5
  1 2 3 4 5
1         * 
2       * * 
3     * * *
4   * * * *
5 * * * * *

*/


// #include <iostream>
// using namespace std;

// int main(){
//     int row;
//     cin>>row;

//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=row-i; j++){
//             cout<<"  ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//another way

#include <iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(j<=row-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}