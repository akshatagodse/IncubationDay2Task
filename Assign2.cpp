// Write a program to accept a string and reverse it.
#include <iostream>
#include <cstring>
using namespace std;
void reverseString(string str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    cout << str;
}
int main() {
    string  str="" ;
    cout << "Enter String = ";
    cin >> str;
    reverseString(str);

    return 0;
}