// Write a program to accept a string, a position P and a character T. Replace the character at position P in the string with character T.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str="" ;
    int pos;
    char ch;
    cout << "Enter String : ";
    cin >> str;
    cout << "Enter position of character u want : ";
    cin >> pos;
    cout << "Enter Character : ";
    cin >> ch;

    int length=str.length();
    
    for(int i=0;i<length;i++)
    {

        if(i==pos)
        {
            str[i-1]=ch;
        }
        
    }
    cout << "Output String : " << str;


    return 0;
}