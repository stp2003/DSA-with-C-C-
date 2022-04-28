#include <iostream>
using namespace std;

int Rfact(int n){            // Recursive Way.
    if(n==0)
      return 1;
    
    return Rfact(n-1)*n;
}

int Ifact(int n){         // Iterative Way.
    int i,f=1;
    for(i=1;i<=n;i++)
      f*=i;
    return f;
}

int main()
{
    printf("%d ",Rfact(5));
    printf("\n%d ",Ifact(5));
    return 0;
}