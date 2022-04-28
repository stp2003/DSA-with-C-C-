#include <iostream>
using namespace std;

double IE(int x,int n){            //Iterative Way.
    double s=1;
    for(;n>0;n--)
       s=1+x/n*s;
    return s;
}

double He(int x,int n){        //Horners Rule.
    static double s;
    if(n==0)
       return s;
    s=1+x*s/n;
    return He(x,n-1);
}

int main()
{
    printf("%lf",IE(1,10));
    printf("\n%lf",He(1,10));
    
    return 0;
}