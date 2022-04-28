#include <iostream>
using namespace std;

void Missing(int arr1[], int arr2[], int n)
{
    int l, h;
    l = 1;
    h = 12;
    for (int i = 0; i < n; i++)
    {
        arr2[arr1[i]]++;
    }
    for (int i = l; i <= h; i++)
    {
        if (arr2[i] == 0)
        {
            printf("\nThe missing elements are: %d", i);
        }
    }
}

int main()
{
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int B[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int size = sizeof(A) / sizeof(A[0]);

    Missing(A, B, size);
    return 0;
}