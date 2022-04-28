#include <iostream>
using namespace std;

void fun1(int n){
    if (n>0)
    {
        printf("%d",n);      // Pehle print karega phir call karega.
        fun1(n-1);
    }
}

void fun2(int n){
    if (n>0)
    {
        fun2(n-1);       // Pehle call karega phir print karega.
        printf("\n%d",n);
    }
    
}

int main()
{
    int x=3;
    fun1(x);
    fun2(x);
    
    return 0;
}