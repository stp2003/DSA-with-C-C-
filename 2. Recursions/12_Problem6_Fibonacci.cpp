#include <iostream>
using namespace std;

int Ifib(int n){               // Iterative way.
    int t0=0,t1=1,s,i;
    if(n<=1)  {return n;}
    for (i = 2; i <=n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int Rfib(int n){           // Recursive Way.
    if(n<=1)
        return n;
    return Rfib(n-2)+Rfib(n-1);
}

int F[10];                  // Better recursive way.
int Better_Resursion(int n){
    if(n<=1){
        F[n];
        return n;
    }
    else{
        if(F[n-2]==-1)
           F[n-2]=Better_Resursion(n-2);
        if(F[n-1]==-1)
           F[n-1]==Better_Resursion(n-1);
    F[n]=F[n-2]+F[n-1];
    return F[n-2]+F[n-1];
    }

}

int main()
{
    printf("%d",Ifib(7));  
    printf("\n%d",Rfib(7));  

    for(int i=0;i<10;i++)
        F[i]=-1;
    printf("\n%d",Better_Resursion(7));  
    
    return 0;
}