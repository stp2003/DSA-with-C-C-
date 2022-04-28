#include <iostream>
using namespace std;

// struct Rectangle // Defination of a structure.
// {
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle r)    //call by value.
// {
//     r.length=20;
//     cout<<"Length "<<r.length<<","<<"Breadth "<<r.breadth<<endl;
// }

// int main()
// {
//     struct Rectangle r={10,5};

//     fun(r);

//     printf("Length %d\nBreadth %d\n",r.length,r.breadth);
//     return 0;
// }

struct Rectangle // Defination of a structure.
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)    //call by address.
{
    p->length=20;
    cout<<"Length "<<p->length<<","<<"Breadth "<<p->breadth<<endl;
}

int main()
{
    struct Rectangle r={10,5};

    fun(&r);

    printf("Length %d\nBreadth %d\n",r.length,r.breadth);
    return 0;
}