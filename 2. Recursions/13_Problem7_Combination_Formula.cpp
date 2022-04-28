#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
       return 1;
    return fact(n-1)*n;
}

int ncr(int n,int r){           //Normal Recursive Appraoch
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}

int NCR(int n,int r){     //Better recursive approach.
    if(r==0||n==r)
       return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}

int main()
{
    printf("%d",ncr(5,3));
    printf("\n%d",NCR(5,3));
    
    return 0;
}