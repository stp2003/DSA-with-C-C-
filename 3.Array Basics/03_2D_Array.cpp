#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,9}};
    
    int *B[3];
    int **C;
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    } 

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    C=(int **)malloc(3*sizeof(int*));           // Pura heap me banega

    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    return 0;
}