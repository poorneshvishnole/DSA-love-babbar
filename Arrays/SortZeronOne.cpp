#include<iostream>
using namespace std;


int main(){
    int arr[]={0,1,0,1,1,0,0,0,1,0};
    int size =10;   
    int zeroCount=0;
    int oneCount =0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount+=1;
        }
        
        if(arr[i]==1){
            oneCount+=1;
        }
    }
 

    for(int i=0;i<size;i++){
        if(i<zeroCount){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}