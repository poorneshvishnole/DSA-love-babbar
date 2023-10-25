#include<iostream>
using namespace std;

int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,25};
    int key =5;

    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"found at index "<<i;
        }
    }

}