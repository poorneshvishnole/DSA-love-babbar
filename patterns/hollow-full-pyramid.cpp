#include<iostream>
using namespace std;

int main(){

    int n =6;
    int col = (2*n)-1;
     int gap =n-1;
    int  count =1;
     
     for(int i=0;i<n;i++){
        for(int j=0;j<col;j++){

            if(j==gap ||  j == count+gap-1 || i==n-1 ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        gap=gap-1;
        count+=2;
        cout<<endl;
     }

}