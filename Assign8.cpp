// Write a program to accept a string and starting with first character replace every alternate character with the '*' character.
#include <iostream>

using namespace std;

int main()

{

    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    int length=str.length();
    for(int i=0;i<length;i++)
    {

        if(i % 2 == 0)
        {
            str[i]='*';
        }
        
    }
    cout << str;

}