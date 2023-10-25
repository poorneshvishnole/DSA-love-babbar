#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> v;
    while(1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"capacity :"<<v.capacity()<<" size : "<<v.size()<<endl;
    }
}