#include<iostream>
using namespace std;
int main(){
    double rainfall[4][7], sum=0, avg;
cout<<"Please enter the rainfall rate for 4 weeks\n";
for (int i=0; i < 4;++i)
{
cout<<"week#"<<(i+1)<<":";
for (int j=0; j < 7;++j) cin>>rainfall[i][j];
cout<<endl;
}
cout<<"\nClassification for each week: \n"; for (int j=0; j < 4;++j)
{
cout<<"week# "<<(j+1);
sum=avg=0;
for (int i=0 ; i<7 ; ++i )
sum += rainfall[j][i];
avg = sum/7;
if( avg >= 6 )
cout<<": High .. ("<<avg<<")";
else if ( (avg< 6) && (avg> 3))
cout<<": Medium .. ("<<avg<<")";
else
cout<<": Low .. ("<<avg<<")";
cout<<endl;
}
return 0;

}