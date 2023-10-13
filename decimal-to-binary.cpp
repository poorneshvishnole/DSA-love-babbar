#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binary;
    int i =0;
    while(n>0){
        int bit = n%2;
        binary = bit*pow(10,i++)+binary;
        n=n/2;
        


    }
    return binary;
}

int decimalToBinary2(int n){
    int binary =0;
    int i =0;
    while(n>0){
        int bit =(n & 1);
        binary =bit*pow(10,i++)+binary;
        n=n>>1;
            }
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<decimalToBinary2(n)<<endl;
}
