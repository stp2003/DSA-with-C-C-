#include<stdio.h>


int RecBinSearch(int A[], int l, int r, int K);
void printArray(int A[], int n);

 main()
{
	int A[20], n, i, K,index;
  
  printf("Enter the array size : ");
  scanf("%d",&n);
  
  printf("Enter the array elements in ascending order : \n");
    for (i=0;i<=n-1;i++)
    {
	scanf("%d", &A[i]);
    }
    
    printf("Enter the search key: ");
    scanf("%d", &K);
    
    printf("\nThe given array is : [ ");
    printArray(A, n);
    printf("]\n");
    
    index = RecBinSearch(A, 0, n-1, K);
     if(index>=0)
    {
    	printf("The key found at position %d in the given array\n", index+1);
	}
	else
	{
		printf("The key not found in the given array\n");
	}
    
}

//This function prints the elements in an array
void printArray(int A[], int n) 
{ 
    int i; 
    for (i=0;i<=n-1;i++)
    {
	printf("%d", A[i]);
	printf(" ");
    }      
} 

int RecBinSearch(int A[], int l, int r, int K)
{
	int mid;
	while(l<=r)
	{
	   mid = (l+r)/2;
	   if(A[mid]==K)
	   {
	   	return mid;
	   }	   
	   else if(A[mid]<K)
	   {
	   return RecBinSearch(A, mid+1, r, K);
	   }	   
	   else
	   {
	   	return RecBinSearch(A, l, mid-1, K);
	   }	   
	}	
	return -1;
}
