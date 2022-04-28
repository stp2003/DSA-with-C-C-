#include <iostream>
using namespace std;

void Duplicate(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr2[arr1[i]]++;
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr2[i] > 1)
        {
            printf("\n%d is %d times.", i, arr2[i]);
        }
    }
}

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(A) / sizeof(A[0]);
    int B[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    Duplicate(A, B, size);

    return 0;
}