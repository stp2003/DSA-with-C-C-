#include <iostream>
using namespace std;

void One_Missing(int arr[], int n) // jab suru 1 se ho
{
    int i, s, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    s = (n + 1) * (n + 2) / 2; // total 12 element hane chahiye missing ko le kar.
    printf("The missing element is: %d", s - sum);
}

void One_Missing1(int arr1[], int n1)  // jab kahi aur se suru ho
{
    int l, h, diff;
    l = arr1[0];
    h = arr1[10];
    diff = l - 0;
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] - i != diff)
        {
            printf("The missing element is: %d", i + diff);
            break;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12};
    int B[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    int size = sizeof(A) / sizeof(A[0]);
    int size1 = sizeof(B) / sizeof(B[0]);

    // One_Missing(A, size);
    One_Missing1(B, size1);

    return 0;
}