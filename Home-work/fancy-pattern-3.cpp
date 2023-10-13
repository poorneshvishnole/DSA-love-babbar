#include<iostream>
using namespace std;

int main(){
    int n=4;
    
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<2*i+1;j++){
            if(j==0 ||j==2*i ){
                cout<<"*";
            }else{

                if(j<=i){
                    cout<<count++;
                }else{
                    cout<<--count-1;
                }
                
            }
        }

        cout<<endl;
    }
    

    for(int i=0;i<n-1;i++){
        int count=1;
        for(int j=0;j<2*(n-1)-2*i-1;j++){
            if(j==0||j==2*(n-1)-2*i-2){
                cout<<"*";
            }else{
                if(j<=n-i-2){
                    cout<<count++;
                //    if(j == n-i-2){
                //     count--;
                //    }
                }else{
                    cout<<--count-1;
                }
            }
        }
        cout<<endl;
    }
}