#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){

          cout<<" "; 
        }

         for(int k=0;k<i+1;k++){
                cout<<k+1;
            }


        for(int l=0;l<i;l++){
             cout<<i-l;
        }

        cout<<endl;
    }
}

//     for(int i=1;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i+1;
//         }

//         cout<<endl;
//     }
// }

