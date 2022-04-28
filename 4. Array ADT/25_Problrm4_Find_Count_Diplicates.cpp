#include <iostream>
using namespace std;

void FDuplicate(int arr[], int n)
{
    int lastDuplicate = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDuplicate)
        {
            printf("\n The duplicate numbers are %d", arr[i]);
            lastDuplicate++;
        }
    }
}

void Count_Duplicate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = j + 1;
            while (arr[j] == arr[j])
                j++;
            printf("\n%d is appearing %d times: ", arr[i], j - i);
            i = j - 1;
        }
    }
}

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(A) / sizeof(A[0]);

    // FDuplicate(A, size);
    Count_Duplicate(A, size);
    return 0;
}