#include <iostream>
using namespace std;

void Pair_With_Sum(int A[], int n, int k)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (A[i] + A[j] == k)
        {
            printf("\n%d+%d=%d", A[i], A[j], k);
            i++;
            j--;
        }
        else if (A[i] + A[j] < k)
            i++;
        else
            j--;
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter key: ");
    scanf("%d", key);
    Pair_With_Sum(arr, size, key);

    return 0;
}