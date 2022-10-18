// Write a program to accept a string STR1, starting position P and length L. 
#include <iostream>

using namespace std;

int main()

{

    string str;
    cout << "Enter a string : " << endl;
    cin >> str;
    int startPos,length;
    cout << "Enter start position : ";
    cin >> startPos;
    cout << "Enter length : ";
    cin >> length;

    cout << str.substr(startPos-1,length);
}
   