// #include <iostream>
// using namespace std;

// int main(){
//     int row, col;
//     cin>>row>>col;

//     for(int i=1; i<=row; i++){
//         if(i==1 || i==row){
//             for(int j=1; j<=col; j++){
//             cout<<"*";
//         }
//         }
//         else{
//             for(int j=1; j<=col; j++){
//                 if(j==1 || j==col){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//         }
//         }
//         cout<<endl;
//     }
// }

//another way
/* 
    1 2 3 4 5
  1 * * * * *
  2 *       *
  3 *       *
  4 *       *
  5 * * * * *
*/
//when i==1 or i==row or j==1 or j==col --> print "*"

#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}