// Extract from the given string STR, starting from position P, L characters into another string STR2. e.g. STR1="BATATA", P=2, L=4. Then STR2="ATAT".
#include <iostream>

using namespace std;

int main()

{

    string str;
    cout << "Enter a string : " << endl;
    cin >> str;
    int position,length;
    cout << "Enter  position : ";
    cin >> position;
    cout << "Enter length : ";
    cin >> length;

    string str2 = str.substr(position-1,length);
    cout << str2;
}