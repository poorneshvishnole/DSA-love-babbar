#include<iostream>
using namespace std;

int main(){
  int rows=5,col=5;
   for(int i =0;i<rows;i++){
    for(int j =0;j<col;j++){
       
       if(j<=i){
          cout<<"* ";
        // numeric-half-pyramid
        // cout<<j+1<<" ";
       }else{
        cout<<"  ";
       }

    }
    cout<<endl;

   }
}