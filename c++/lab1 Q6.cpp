#include<iostream>
#include<string>
using namespace std;
int main(){
    int size,marks[size],maxindex=0;
    double average,sum=0;
    string name[size];
    cout<<"Enter number of students:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter student#"<<(i+1)<<" name:";
        cin>>name[i];
        cout<<"Enter student#"<<(i+1)<<" mark:";
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        if(marks[i]>marks[maxindex])
        maxindex=i;
    }
    cout<<"Results:"<<endl;
    cout<<"\n Student with max mark is"<<name[maxindex]<<"of mark"<<marks[maxindex];
    for(int i=0;i<size;i++)
    sum=sum+marks[i];
    average=sum/size;
    cout<<"studets Average="<<average<<endl;
    cout<<"\n students with marks above average are:";
    for(int i=0;i<size;i++){
        if(marks[i]>average)
        cout<<endl,name[i];
    }
    return 0;


}