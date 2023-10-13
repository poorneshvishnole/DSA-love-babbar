#include<iostream>
using namespace std;


int printDigitsOfNum(int n){
    int digit=0;
    while(n>0){
        digit =n%10;
         
         cout<<digit <<" ";
         n=n/10;
    }
}
int main(){
    printDigitsOfNum(7869);
}