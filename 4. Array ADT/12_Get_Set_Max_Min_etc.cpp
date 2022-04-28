#include <iostream>
#include <stdlib.h>
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

int GET(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

int SET(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int MAX(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int MIN(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int SUM(struct Array arr)
{
    int s = 0, i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}

float AVG(struct Array arr)
{
    return (float)SUM(arr) / arr.length;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    printf("%d\n", GET(arr, 2)); // 4
    SET(&arr, 0, 15);            // 15 3 4 5 6
    printf("max is: %d\n", MAX(arr));
    printf("min is: %d\n", MIN(arr));
    printf("sum is: %d\n", SUM(arr));
    printf("avg is: %f\n", AVG(arr));

    Display(arr);
}