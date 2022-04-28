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

int IS_SORTED(struct Array arr){
    int i;
    for ( i = 0; i < arr.length-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 15, 16}, 10, 5}; // Array elements, size, length.

    printf("%d\n",IS_SORTED(arr));

    Display(arr);

    return 0;
}
