#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int size=5;
    int temp=arr[size-1];
    int tempo=arr[size-2];


  // right shift by one
   int i;
   int j;
    for(i=size-1;i>=1;i--){
        
        arr[i]=arr[i-2];
        
    }
    arr[0]=tempo;
    arr[1]=temp;


//left shift by one 

// int i;
// int j;
//    for(i=0;i<size;i++){
        
//         arr[i]=arr[i+1];
        
//     }
//     arr[size-1]=temp;

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}