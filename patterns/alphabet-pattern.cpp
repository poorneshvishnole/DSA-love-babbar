#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            cout<<65+j;
        }
        cout<<endl;
    }
}