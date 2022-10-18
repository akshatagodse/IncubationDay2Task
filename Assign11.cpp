// Write a program to accept a string and convert all its characters to lower case.
#include <iostream>

using namespace std;

int main()

{

    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')   
			str[i] = str[i] + 32;       
	}
	cout<<"The string in lower case: "<< str;
}