#include <iostream>
using namespace std;

int main()
{
    int A[]={4,3,8,7,9,1,6};
    int size = sizeof(A) / sizeof(A[0]);
    int min=A[0];
    int max=A[0];
    for (int i = 0; i < size; i++)
    {
        if(A[i]<min)
           min=A[i];
        else
           max=A[i];
    }
    
    return 0;
}