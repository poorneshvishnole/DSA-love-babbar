#include<iostream>
using namespace std;


int SumOfEven(int n){
    int sum=0;
    for(int i = 2;i<=n;i=i+2){
      sum+=i;

    }
    return sum;
}
int main(){
    cout<<SumOfEven(18);
}