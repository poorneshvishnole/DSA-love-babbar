#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,1,4,5};
    int n=5;

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" , ";
    }
}