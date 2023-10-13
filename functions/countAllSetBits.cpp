#include<iostream>
using namespace std;


int countAllSetBits(int n){

    int binary;
  int count=0;
    while(n>0){
        int bit = n%2;
        if(bit==1){
            count++;
        }
        n=n/2;
    }
    return count;
}
int main(){
    cout<<countAllSetBits(7 );
}