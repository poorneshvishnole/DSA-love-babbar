#include<iostream>
using namespace std;



int Count(int arr[],int size){
    int countOfOne=0;
    int countOfZero =0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            countOfOne++;

        }else{
            countOfZero++;
        }
    }

    cout<<"count of 1 "<<countOfOne<<endl;
    cout<<countOfZero<<endl;

}
int main(){

    int arr[5]={0,1,0,1,1};
    int size =5;
    Count(arr ,size);
}