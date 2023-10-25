#include<iostream>
using namespace std ;

void print(int arr[][3],int row,int col){
    for(int i=0 ;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool Searching(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]== target){
                return true;
            }
        }
    }

    return false;
}
void rowWiseSum(int arr[][3],int row ,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" row "<<i;
        cout<<endl;
    }
}

void colWiseSum(int arr[][3],int row ,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" col "<<i;
        cout<<endl;
    }
}

void Transpose(int arr[][3],int row,int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j)
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){

  int arr[3][3]={ 
  {10,20,30},
  {12,11,10},
  {23,45,67}};

//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++ ){
//         cin>>arr[i][j];
//     }
    
//     }

  print(arr,3,3);
  cout<<endl;
  rowWiseSum(arr,3,3);
  cout<<endl;
  colWiseSum(arr,3,3);
  cout<<endl;
  Transpose(arr,3,3);
  print(arr,3,3);
  
}