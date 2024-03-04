#include<iostream>
using namespace std;
int main(){
    int list[5]={};
    int count=0,item;
    for(int i=0;i<5;i++){
        cout<<"Enter#"<<(i+1)<<" item:";
        cin>>list[i];
    }
    cout<<"number of repetitions for:";
    cin>>item;
    for(int i=0;i<5;i++){
        if(item==list[i]){
            count++;
        }
    }
    cout<<item<<"has found"<<count<<"times.";
    return 0;

}