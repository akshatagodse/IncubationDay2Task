// Write a program to accept a string and calculate its length.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str="" ;
    int pos;
    cout << "Enter String = ";
    cin >> str;
    cout << "Enter position of character u want : ";
    cin >> pos;
    int length=str.length();
    

    for(int i=0;i<length;i++)
    {
        if(i==pos)
        {
            cout << str.at(pos-1);
        }
        
    }


    return 0;
}