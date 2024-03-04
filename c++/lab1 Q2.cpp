#include<iostream>
using namespace std;
int main(){
    int arrA[5],arrB[5],arrC[10];
    cout<<"First:items of array (arrA):"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter the item "<<(i)<<" of (arrA):";
        cin>>arrA[i];
        arrC[i]=arrA[i];
    }
    cout<<"Second:items of array (arrB):"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter the item "<<(i)<<" of (arrB):";
        cin>>arrB[i];
        arrC[i]=arrB[i];
    }
    cout<<"Array arrC items are:"<<endl;
    for(int i=0;i<10;i++){
         cout<<arrC[i]<<endl;
    }

    
}