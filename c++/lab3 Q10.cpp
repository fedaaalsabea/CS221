#include<iostream>
using namespace std;
int main(){
    bool ordered=true;
    int noItems=10;
    int nums[noItems];
    cout<<"Enter 10 numbers:";
    for(int i=0;i<noItems;i++){
        cin>>nums[i];
    }
    for(int j=0;j<noItems-1;j++){
        if(nums[j]>nums[j+1]){
            ordered=false;
            break;
        }
    }
    if(ordered){
        cout<<"ordered ascendingly";
    }
    else{
        cout<<"Unordered ascendingly";
    }
    return;

}