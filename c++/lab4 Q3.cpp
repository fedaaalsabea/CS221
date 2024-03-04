#include <iostream>
using namespace std;
int main() {
    string pass;
    int len = pass.length();
    bool hasLower = false, hasUpper = false, hasDigit = false;
    cout << "Enter a password: ";
    cin >> pass; 
    for (int i=0 ; i<len ; i++) {
    if (islower(pass[i]))
    hasLower = true;
    if (isupper(pass[i]))
    hasUpper = true;
    if (isdigit(pass[i]))
    hasDigit = true;
}
    cout << "Strength of password:- ";
    if (hasLower && hasUpper && hasDigit && (len >= 8))
    cout << "Strong" << endl;
    else if (hasLower && hasUpper && (len >= 6))
    cout << "Moderate" << endl;
    else
    cout << "Weak" << endl;
    return 0;
}