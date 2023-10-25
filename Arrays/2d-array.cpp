#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<vector<int>> arr(5,vector<int>(10,1));

//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){
    int arr[7] ={-7,23,12,-10,-11,40,60};

    int j=0;
    for(int i=0;i<7;i++){
        if(arr[i]<0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}