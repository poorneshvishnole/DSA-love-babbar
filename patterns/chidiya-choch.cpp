#include<iostream>
using namespace std;

int main(){
    int n=6;

    for(int i;i<n;i++){
        for(int j=0;j<n-i;j++){
            
            if(j==0||j==n-i-1||i==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}