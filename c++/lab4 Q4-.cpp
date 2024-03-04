#include <iostream>
#include <cmath>
using namespace std;
int main() {
float area, side;
cout << "Print the area of a hexagon:\n";
cout << "---------------------------------\n";
cout << "Input the side of the hexagon: ";
cin>> side;
area = (6 * (pow(side,2))) / (4 * tan(M_PI/6));
cout<<"The area of the hexagon is: "<< area <<"\n";
return 0;
}
