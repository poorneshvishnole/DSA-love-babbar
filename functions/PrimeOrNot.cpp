#include<iostream>
using namespace std;


int PrimeOrNot(int n){


    for(int i=2;i<n;i++){
       if(n%i==0){
         return false;
    }
 
    return true;
}
int main(){
    cout<<PrimeOrNot(16);
}