#include<iostream>
#include<string> 
#include<cctype> 
using namespace std; 
int main(){ 
    string n,Upn; 
    int i; 
    cout<<"Enter your name:\n"; 
    cin>>n; 
    cout<<"The uppercase is:\n" ; 
    for(i=0;i<n.length();i++){ 
    if(isupper(n.at(i))==false){ 
    Upn=toupper(n.at(i)); 
    cout<<Upn;} 
    else 
    cout<<n.at(i);} 
    return 0;
}