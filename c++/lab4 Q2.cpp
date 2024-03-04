#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string str;
    cout<<"Enter a name: ";
    cin>>str;
    for(int i=0 ; i<str.length() ; ++i)
    str[i] = toupper(str[i]);
    cout<<"Welcome "<<str;
    return 0;
}