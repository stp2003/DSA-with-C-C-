#include <iostream>
using namespace std;

struct Rectangle // Defination of a structure.
{
    int length;
    int breadth;
};

int main()
{
    // Rectangle r={10,5};
    // cout<<r.length<<endl;      //We use "." operator for accesing objects in structure.
    // cout<<r.breadth<<endl;

    // Rectangle *p=&r;
    // cout<<p->length<<endl;    // We use "->" operator for accessing objects when we have a pointer to a structure.
    // cout<<p->breadth<<endl;

    /* Object in heap: */
    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // In C language.

    p=new Rectangle;          // In C++ language.

    p->length = 15;
    p->breadth = 7;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}