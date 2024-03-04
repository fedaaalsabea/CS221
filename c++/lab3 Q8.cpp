#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string listofnames[5];
    string name;
    cout<<"please enter 5 names:";
   for(int i=0;i<5;i++){
    cin>>listofnames[i];
    transform(listofnames[i].begin(), listofnames[i].end(),listofnames[i].begin(),::tolower);}
    cout<<"number of repetitions for:";
   cin>>name;
   transform(name.begin(), name.end(),name.begin(),::tolower);
   for(int i=4;i>0;i--){
    if(name==listofnames[i]){
        cout<<name<<"has been found in location"<<(i+1)<<endl;
        break;}}
   return 0;
}
