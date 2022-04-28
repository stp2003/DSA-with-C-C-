#include <iostream>
using namespace std;

void Tower_of_Hanoi(int n,int s,int a,int d){     //n->no.of discs, s-> source, a-> auxilarry, d-> destination
    if(n>0){
        Tower_of_Hanoi(n-1,s,d,a);
        printf("(%d,%d)\n",s,d);

        Tower_of_Hanoi(n-1,a,s,d);
    }
}

int main()
{
    
    Tower_of_Hanoi(1,1,2,3);            
    
    return 0;
}