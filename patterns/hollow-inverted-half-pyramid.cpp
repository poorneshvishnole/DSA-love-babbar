#include<iostream>
using namespace std;

int main(){
  int n =50;
   for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
      

       if(i==0 || j==0 || j==n-i-1){
        cout<<"*";
       }else {
        cout<<" ";
       }


     //numeric-inverted-half-pyramid
    //  cout<<j+1<<" ";
    }
    cout<<endl;

   }
}