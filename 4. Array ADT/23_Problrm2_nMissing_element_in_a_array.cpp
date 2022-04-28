#include <iostream>
using namespace std;

void N_Missing(int arr[], int n)
{
    int l, h, diff;
    l = arr[0];
    h = arr[n];
    diff = l - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                printf("The missing elements are: %d", i + diff);
                diff++;
            }
        }
    }
}

int main()
{
    int A[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    int size = sizeof(A) / sizeof(A[0]);

    N_Missing(A, size);
    return 0;
}