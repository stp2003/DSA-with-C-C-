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

void SWAP(int *x, int *y)   // REVERSE2 ke liye hai ye
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void REVERSE(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length-1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];  // A ko B me copy kar lenge reverse kar ke
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];  // B ko wapas A me copy kar lenge 
}

void REVERSE2(struct Array *arr){
    int i, j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        SWAP(&arr->A[i],&arr->A[j]);
    }

}


int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5}; // Array elements, size, length.

    REVERSE2(&arr);

    Display(arr);

    return 0;
}