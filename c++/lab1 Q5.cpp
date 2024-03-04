#include<iostream>
using namespace std;
int main(){
    int size;
    double num[size],nnopassed=0,nofailed=0,noincorrect=0;
    double percpassed,percfailed,percinvalid;
    cout<<"Enter number of students:";
    cin>>size;
    cout<<"Enter students marks:";
    for(int i=0;i<size;i++){
        cin>>num[i];
        if(num[i]>59)
        nnopassed++;
        else if (num[i]<=59 && num[i]>=0)
        nofailed++;
        else
        noincorrect++;
    }
    percpassed=nnopassed/size*100;
    percfailed=nofailed/size*100;
    percinvalid=noincorrect/size*100;
    cout<<"Results:";
    cout<<"percentage of passed students="<<percpassed<<"%"<<endl;
    cout<<"percentage of failed students="<<percfailed<<"%"<<endl;
    cout<<"percentage of incorrect students="<<percinvalid<<"%"<<endl;
    return 0;




}