#include<iostream>
using namespace std;


bool isPrime (int n){

    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        } 
    }
    return true;
}

int printPrimes(int n){
    for(int i=1;i<=n;i++){
        if(isPrime(i)==1){
            cout<<i<<endl;
        }
    }
}
int main(){
    printPrimes(50);
}