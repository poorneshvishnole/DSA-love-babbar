#include<iostream>
using namespace std;

int main(){
        int n=5;

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                 if(i==n-1){
                   cout<<j+1; 
                 }
                else if(j==0){
                    cout<<1;
                    
                }else if(j==i){
                    cout<<i+1;
                }else{
                    cout<<" ";
                }

            }

            cout<<endl;
        }
}