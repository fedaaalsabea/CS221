#include<iostream>
using namespace std;
int main(){
    int size;
    int data[size],temp;
    bool order=false;
    cout<<"Enter your data:";
    for(int i=0;i<size;i++)
    cin>>data[i];
    if(size<2){
        cout<<"nothing to sort!";
    }
    else{
        for(int i=0;i<size-1 && order==false;i++){
            order=true;
            for(int j=0;j<size-1;j++){
                if(data[j]<data[j+1]){
                    order=false;
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
        }
        cout<<endl<<"Items in descending order:";
        for(int i=0;i<size;i++){
            cout<<data[i]<<"\t";
        }
    }
    return 0;
}