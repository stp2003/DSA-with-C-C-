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

void APPEND(struct Array *arr,int x){
    if(arr->length<arr->size)  // check karega ki array ka length size se chota hai ki nahi
       arr->A[arr->length++]=x; // agar chota hoga toh array ka length badha ke X me daal dega
}

void INSERT(struct Array *arr,int index,int x){
    if(index>=0 && index <=arr->length){
        for(int i=arr->length;i>index;i--)
           arr->A[i]=arr->A[i-1]; // Elements ko aage shift kar denge
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5}; // Array elements, size, length.

    APPEND(&arr,11);
    INSERT(&arr,5,17);
    Display(arr); 
   
    return 0;
}
