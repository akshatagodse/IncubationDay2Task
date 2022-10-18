// Write a program to accept a string and check if all the characters in the string are alphabets.

#include <iostream>

using namespace std;



int main()

{

    string str;

    cout << "Enter a string" << endl;

    cin >> str;
    int index, check = 0;

    // for loop to traverse the whole string
    for (index = 0; str[index]; index++) {
      // for loop to traverse the whole string
      for (index = 0; str[index]; index++) {
        // if condition to check if the string is Alphabet
        if ((str[index] >= 'A' && str[index] <= 'Z') ||
            (str[index] >= 'a' && str[index] <= 'z') || (str[index] == 32)) {
          check++;
        } else {
          check = 0;
          break;
        }
      }

      if (check != 0) {
        cout << "String contains only alphabets" << endl;
        break;
      } else {
        cout << "String does not contain only alphabets " << endl;
        break;
      }
    }
  }

    
