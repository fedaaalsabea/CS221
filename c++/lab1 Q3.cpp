#include<iostream>
using namespace std;
int main(){
    int arrA[5],arrB[5],arrC[5];
    cout<<"First array (arrA) items:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"item#"<<i<<":";
        cin>>arrA[i];
    }
    cout<<"Second array (arrB) items:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"item# "<<(i)<<":";
        cin>>arrB[i];
        arrC[i]=arrA[i]+arrB[i];
    }
    cout<<"Resulting Array items (arrC=arrA+arrB) are "<<endl;
    for(int i=0;i<5;i++){
         cout<<arrC[i]<<endl;
    }

    
}

