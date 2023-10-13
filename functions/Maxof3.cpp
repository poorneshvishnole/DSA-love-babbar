#include<iostream>
using namespace std;


int maxOfThree(int a , int b, int c){
    int max;
    if(a>b){
        if(a>c){
            max =a;
        }else{
            max=c;
        }
    }else{
            max =b;
        }

    return max;
}
int main(){

    cout<<maxOfThree(3,3,1);

}