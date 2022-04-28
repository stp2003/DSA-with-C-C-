#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    /* Basic of pointers */
    // int a=10;
    // int *p;
    // p=&a;
    //  cout<<"The value: "<<a<<endl;      //10
    //  cout<<"The value: "<<*p<<endl;     //10
    //  cout<<"The address: "<<p<<endl;    //hexa
    //  cout<<"The address: "<<&a<<endl;   // hexa

    /* Pointer to a array */
    // int A[5]={2,4,6,8,10};
    // int *p;
    // p=A;
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cout<<A[i]<<endl;
    //      cout<<p[i]<<endl;    //Printing using pointers.
    //  }

     /* Creating a array in heap*/
     int *p;
     p=(int *)malloc(5*sizeof(int));   //C method of allocating memory in heap.

     p=new int[5];                    //C++ method of allocating memory in heap.

     p[0]=6;        
     p[1]=7;
     p[2]=8;
     p[3]=9;
     p[4]=10;
     for (int i = 0; i < 5; i++)
     {
         
         cout<<p[i]<<endl;    //Printing using pointers.
     }
     //This is for de-allocating the memory allocated in heap.
     delete[]p;        // After using new.
     free(p);          // After using malloc.
     



    
    return 0;
}