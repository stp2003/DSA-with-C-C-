#include <iostream>
using namespace std;

struct Rectangle            //Defination of a structure.
{
    int length;       //Sab ke liye same size lega.
    int breadth;
    char x;          // Char le liye bhi 4 byte lega.
};


int main()
{
    struct Rectangle r1={10,5}; //In C we hwve to write struct but in C++ it is optional.

    printf("%d\n",sizeof(r1));

    r1.length=15;    //Changing the value after declaration.
    r1.breadth=36;

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    
    
    return 0;
}