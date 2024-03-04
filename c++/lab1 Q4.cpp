#include<iostream>
using namespace std;
int main(){
    int size;
    int original[size],reversedArray[size];
    cout<<"Enter your original array size:"<<endl;
    cin>>size;
    cout<<"Enter original array items:"<<endl;
    for(int i=0;i<size;i++)
    cin>>original[i];
    for(int i=0,j=size-1;i<size;i++,j--)
    reversedArray[j]=original[i];
    cout<<"You arrays items are:"<<endl;
    cout<<"index\toriginal Array \tReversed Array\n";
    for(int i=0;i<size;i++)
    cout<<i<<"\t"<<original[i]<<"\t\t"<<reversedArray[i]<<endl;
    return 0;


}