#include<iostream>
#include<string>
using namespace std;
int main(){
    bool order=false;
    int size;
    string temp;
    string names[size]={};
    cout<<"Enter a numbers of names you want to order it:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"#"<<(i+1)<<"name:";
        cin>>names[i];
    }
    if(size<2){
        cout<<"No need to sort it. it's already sorted.";
    }
    else{
        for(int i=0;i<size-1 && order==false;i++){
            order=true;
            for(int j=0;j<size-1;j++){
                if(names[j].compare(names[j+1])>0){
                    order=false;
                    temp=names[j];
                    names[j]=names[j+1];
                    names[j+1]=temp; } } }
    }
    cout<<endl<<"Item in ordered:"<<endl;
    for(int i=0;i<size;i++){
        cout<<names[i]<<"\t";
    }
    return 0;

}
