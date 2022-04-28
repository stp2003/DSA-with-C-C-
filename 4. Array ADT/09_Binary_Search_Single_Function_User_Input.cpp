#include <iostream>
using namespace std;

int main()
{

    int l, h, key, mid;

    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int A[size];
    l = 0;
    h = size - 1;

    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Key: " << endl;
    cin >> key;

    cout << "The elements in the array are: " << endl;

    for (int i = 0; i < size; i++)
    {

        cout << "A[" << i << "]=" << A[i] << endl;
    }


    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {

            cout << "FOUND AT INDEX: " << mid <<". OR at POSITION: "<<mid+1<< endl;
            return 0;
        }
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << "NOT FOUND";

    return 0;
}