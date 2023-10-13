#include<iostream>
using namespace std;

float tempToFr(int n){
    return n*((float)9/5)+32;
}
int main(){
     cout<<tempToFr(45);
}