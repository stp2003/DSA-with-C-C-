// #include <iostream>
// using namespace std;

// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct Array arr)
// {
//     int i;
//     printf("Elements are: \n");
//     for (i = 0; i < arr.length; i++)
//         printf("%d ", arr.A[i]);
// }

// void SWAP(int *x, int *y)   
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void Rearrange(struct Array *arr){
//     int i=0;
//     int j=arr->length-1;
//     while (i<j)
//     {
//         while(arr->A[i]<0) i++;
//         while(arr->A[i]>=0) j--;
//         if(i<j) SWAP(&arr->A[i],&arr->A[j]);

//     }
// }

// int main()
// {
//     struct Array arr = {{2, -3, 25, 10, -15,-1}, 10, 6}; // Array elements, size, length.
    
//     Rearrange(&arr);
    
//     Display(arr);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Array{
    int size;
    int A[100];

    Array(int size){
        this->size = size;
        cout<<"Enter elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>this->A[i];
        }
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (this->A[i] < 0) {
                if (i != j)
                    swap(this->A[i], this->A[j]);
                j++;
            }
        }
        for(int i=0;i<size;i++){
            cout<<this->A[i]<<" ";
        }
    }
};
int main(){
    Array a(10);
}