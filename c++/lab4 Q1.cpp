#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int x1, y1, x2, y2, choice;
    double distance;
    do {
    cout<<"Please enter the first point (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Please enter the second point (x2,y2): ";
    cin>>x2>>y2;
    distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    cout<<"The distance between the two points = "<<distance<<endl;
    cout<<"\nEnter 0 to stop, any number to continue: ";
   cin>> choice;
   } while(choice != 0);
   return 0;
}