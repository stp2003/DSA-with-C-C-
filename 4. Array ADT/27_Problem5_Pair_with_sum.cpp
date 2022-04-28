#include <iostream>
using namespace std;

void Pair_With_Sum(int A[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == k)
            {
                printf("\n%d+%d=%d", A[i], A[j], k);
            }
        }
    }
}

int main()
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int size = sizeof(arr) / sizeof(arr[0]);int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter key: ");
    scanf("%d", key);
    Pair_With_Sum(arr, size, key);

    return 0;
}