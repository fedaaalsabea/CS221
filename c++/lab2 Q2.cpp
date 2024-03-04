#include<iostream>
using namespace std;
int main(){
    int size,originalitems[size],shifteditem[size];
    int direction,newindex,numbercells,newvalue;
    cout<<"Enter array size:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter item #"<<(i+1)<<":";
        cin>>originalitems[i];
    }
    cout<<"Enter shifting direction (Enter 1 for 'Right' and -1 for left):";
    cin>>direction;
    cout<<"Enter number of cells to shift:";
    cin>>numbercells;
    cout<<"Enter the value you want to replace discarded cells:";
     cin>>newvalue;
    for(int i=0;i<size;i++){
        if(direction==1){
            newindex=i+numbercells;
            if(newindex>=size){
            newindex=newindex%size;
            shifteditem[newindex]=newvalue;}
        else
        shifteditem[newindex]=originalitems[i];}
        else if (direction==-1){
            newindex=i-numbercells;
            if(newindex<0){
                newindex=newindex%size;
            }
            if(newindex<0){
            newindex=newindex+size;
            shifteditem[newindex]=newvalue;}
            else
            shifteditem[newindex]=originalitems[i];
        }
        else {
        cout<<"incorrect input"<<endl;
    }
     
    }
    cout<<"The original items:"<<endl;
    for(int i=0;i<size;i++){
        cout<<originalitems[i]<<"\t";
    }
    cout<<endl;
    cout<<"The shifted items:"<<endl;
    for(int i=0;i<size;i++)
    cout<<shifteditem[i]<<"\t";
    return 0;
}
