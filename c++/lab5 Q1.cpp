#include<iostream> 
#include<cmath> 
using namespace std; 
int main(){ 
    double x2,x1,y2,y1; 
    cout<<"Enter x2\n" ; 
    cin>>x2 ; 
    cout<<"Enter x1\n" ; 
    cin>>x1 ; 
    cout<<"Enter y2\n" ; 
    cin>>y2 ; 
    cout<<"Enter y1\n" ; 
    cin>>y1 ; 
    double distance ; 
    double d_x=(x2-x1); 
    double d_y=(y2-y1) ; 
    distance= sqrt(pow(x2-x1,2)+pow(y2-y1,2) ); 
    cout<<"The distance is" " " ""<<distance ; 
    return 0;
   
}