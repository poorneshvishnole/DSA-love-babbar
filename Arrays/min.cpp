#include<iostream>
using namespace std;

int main(){
    int n;
    int min =INT16_MAX;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
    cout<<"enter the value for index "<<i<<" ";
    cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min =arr[i]; 
        }
    }

    cout<<min;
}