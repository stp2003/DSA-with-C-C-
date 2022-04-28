
#include <bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
    cout <<"\nThe rotated array is: "<<endl;
    for (int i = 0; i < n; i++)
        cout<< arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];

    int d;
    cout<<"Enter the value of d: ";
    cin>>d;

    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements in the array are: " << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);

    return 0;
}
