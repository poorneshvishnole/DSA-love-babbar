#include<iostream>
using namespace std;

int main(){
    int arr[7]={3 ,4,5,4,2,3,5};
    int size =7;
    int unique=0;

     
     for(int i=0 ;i<size;i++){
       
       unique ^=arr[i];
     }

     cout<<unique;
}