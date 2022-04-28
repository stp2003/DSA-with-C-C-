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
    printf("Elements are: \n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Insert_Sort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int main()
{
    struct Array arr = {{2, 3, 4, 15, 16}, 10, 5}; // Array elements, size, length.

    Insert_Sort(&arr,1);

    Display(arr);

    return 0;
}