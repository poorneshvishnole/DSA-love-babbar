#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal(int n){
    int decimal =0;
    int i =0;
    while(n>0){
        int bit = n%10;
        decimal = bit*pow(2,i++)+decimal;
        n= n/10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
}
