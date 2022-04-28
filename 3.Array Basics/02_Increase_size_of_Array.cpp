#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));  //Array in heap(DYANAMIC DECLARATION)
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    q=(int *)malloc(10*sizeof(int));  // Bada array hai 

    for(int i=0;i<5;i++)  
       q[i]=p[i];    // p ki values q me daal rahe
    
    free(p);    // p ko free kar rahe
    p=q;       // q ki value p me daal rahe
    q=NULL;   // p ko khali kar rahe

    for(int i=0;i<5;i++)
       printf("%d ",p[i]);
    
    return 0;
}