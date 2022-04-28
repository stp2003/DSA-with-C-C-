#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void SWAP(int *x, int *y)   // Transpose wala hai ye
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)   // Improve karne ke liye ye pointer hoga
{ 
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {

            SWAP(&arr->A[i], &arr->A[i-1]);

            SWAP(&arr->A[i], &arr->A[0]);  // move to front
            
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{8, 3, 7, 12, 15, 6, 9, 10}, 10, 8};
    printf("%d ", LinearSearch(&arr1, 15)); // Improve karne ke liye ye address hoga

    Display(arr1);

    return 0;
}
