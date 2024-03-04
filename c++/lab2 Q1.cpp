#include<iostream>
using namespace std;
int main(){
    int size,originalitems[size],rotateditem[size];
    int direction,newindex,numbercells;
    cout<<"Enter array size:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter item #"<<(i+1)<<":";
        cin>>originalitems[i];
    }
    cout<<"Enter rotaion direction (Enter 1 for 'Right' and -1 for left):";
    cin>>direction;
    cout<<"Enter number of cells to rotate:";
    cin>>numbercells;
    for(int i=0;i<size;i++){
        if(direction==1){
            newindex=i+numbercells;
            if(newindex>=size)
            newindex=newindex%size;
        }
        else if (direction==-1){
            newindex=i-numbercells;
            if(newindex<0){
                newindex=newindex%size;
            }
            if(newindex<0)
            newindex=newindex+size;
        }
        else {
        cout<<"incorrect input"<<endl;
    }
    rotateditem[newindex]=originalitems[i];
    }
    cout<<"The original items:"<<endl;
    for(int i=0;i<size;i++){
        cout<<originalitems[i]<<"\t";
    }
    cout<<endl;
    cout<<"The rotated items:"<<endl;
    for(int i=0;i<size;i++)
    cout<<rotateditem[i]<<"\t";
    return 0;
}
