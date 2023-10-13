#include<iostream>
using namespace std;

int FactorialOfNum(int n){
    int factorial=1;
    if (n < 0)
        cout << "Enter a valid number";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
           
    }
    return factorial;

}
int main(){
    cout<<FactorialOfNum(10);
}