#include <iostream>
using namespace std;

int main()
{

    int i, key;

    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int A[size];

    cout << "Enter the Array Elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << "The elements in the array are: " << endl;

    for (int i = 0; i < size; i++)
    {
        
        cout << "A[" << i << "]=" << A[i] << endl;
    }

    cout << "Enter KEY: ";
    cin >> key;

    for (i = 0; i < size; i++)
    {
        
        if (key == A[i])
        {
            cout << "Found at index: " << i << " .OR position: " << i + 1 << endl;
            return 0;
        }
    }
    cout << "NOT FOUND" << endl;

    return 0;
}
