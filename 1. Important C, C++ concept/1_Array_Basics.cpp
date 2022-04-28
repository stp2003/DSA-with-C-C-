#include <iostream>
using namespace std;

int main()
{
    int A[5]={6,7,8,9,10};    //Initialisation
    // A[0]=6;        
    // A[1]=7;
    // A[2]=8;
    // A[3]=9;
    // A[4]=10;

    cout<<"The size of array: "<<sizeof(A)<<endl;    //Print the size of array.
    
    printf("%d\n",A[2]);                            //Printing elements of array(in C).

    for (int i = 0; i <5; i++)                         // Printing the elements using loop.
    {
        cout<<A[i]<<endl;
    }
    
    for (int x:A)
    {
        cout<<"Printing using for each loop: "<<x<<",";   // Printing using for each loop.
    }
    
    
    return 0;
}