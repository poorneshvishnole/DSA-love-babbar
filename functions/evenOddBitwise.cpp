#include<iostream>
using namespace std;

int evenOrOdd(int n){
    
    if(n&1==1){
        return false;
    }else{

    return true;
    }

}
int main(){
    cout<<evenOrOdd(57);
}