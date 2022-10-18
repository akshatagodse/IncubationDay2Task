// Write a program to accept a string and calculate its length.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[]="" ;
    cout << "Enter String = ";
    cin >> str;

    cout << "String Length = " << strlen(str);

    return 0;
}