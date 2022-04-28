#include <iostream>
using namespace std;

int pow1(int m,int n){
    if(n==0)
       return 1;
    return pow1(m,n-1)*m;
}

int pow2(int m,int n){    // Improved way.
    if(n==0)
       return 1;
    if(n%2==0)
       return pow2(m*m,n/2);
    else 
       return m*pow2(m*m,(n-1)/2);
}

int main()
{
    printf("%d ",pow1(2,4));
    printf("\n%d ",pow2(2,5));
    return 0;
}