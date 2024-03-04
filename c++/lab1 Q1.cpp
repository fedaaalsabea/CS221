#include<iostream>
using namespace std;
int main(){
    int size, max, min;
    double average,sum=0;
    int num[size];

    cout<<"Enter your array size:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter item # "<<(i+1)<<"value:";
        cin>>num[i];
        sum=sum+num[i];
    }
    average=sum/size;
    max=num[0];
    min=num[0];
    for(int i=0;i<size;i++){
        if(max<num[i])
        max=num[i];
        if(min>num[i])
        min=num[i];

    }
    cout<<"Result:"<<endl;
    cout<<"sum of numbers="<<sum<<endl;
    cout<<"average of numbers="<<average<<endl;
    cout<<"max number="<<max<<endl;
    cout<<"min number="<<min<<endl;
    return 0;


}