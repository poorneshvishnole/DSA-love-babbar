#include<iostream>
using namespace std;


int SumToN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    return sum;
}
int main(){
    cout<<SumToN(18);
}