#include <iostream>
using namespace std;

// int add(int a,int b)        //Call by value
// {
//     a++;
//     cout<<a<<endl;
//     return 0;
// }

// int main()
// {
//     int num1=10,num2=15,sum;

//     sum=add(num1,num2);    // Function calling.
    
//     printf("%d\n",num1);
    
//     return 0;
// }


/* Call by Address: */

// void swap(int *x,int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main()
// {
//     int num1=10,num2=15;

//     cout<<"First num Before swap: "<<num1<<endl;
//     cout<<"Second num Before swap: "<<num2<<endl;
//     cout<<endl;

//     swap(&num1,&num2);
//     cout<<"First num After swap: "<<num1<<endl;
//     cout<<"Second num After swap: "<<num2<<endl;
// }

/* Call by Referece: only in C++ */

void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int num1=10,num2=15;

    cout<<"First num Before swap: "<<num1<<endl;
    cout<<"Second num Before swap: "<<num2<<endl;
    cout<<endl;

    swap(num1,num2);
    cout<<"First num After swap: "<<num1<<endl;
    cout<<"Second num After swap: "<<num2<<endl;
}