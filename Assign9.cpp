// Write a program to accept a string and replace every vowel in the string with the '*' character.
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
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
            {
                str[i]='*';

            } 

    }
    cout << str;
}