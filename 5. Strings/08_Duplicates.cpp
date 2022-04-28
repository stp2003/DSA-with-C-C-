/* C++ program to detect duplicate characters in given string**
 ** enter string value of your choice**
 ***enter different string values for different results***
 note: enter the string which has duplicate characters otherwise no values will be printed....
 */

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char string[80];
    cout << "Enter string: ";
    cin.getline(string, 80);

    cout << "Duplicate characters are following" << endl;
    for (int i = 0; i < strlen(string); i++)
    { // nested loop statement
        for (int j = i + 1; j < strlen(string); j++)
        {
            if (string[i] == string[j])
            {                              // logic to detect duplicate character
                cout << string[i] << endl; // duplicate character
                break;
            }
        }
    }

    return 0;
}