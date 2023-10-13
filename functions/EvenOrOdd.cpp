#include<iostream>
using namespace std;


int EvenOrOdd(int n){
    if(n%2==0){
        return true;
    }

    return false;
}
int main(){

    cout<<EvenOrOdd(33);
}