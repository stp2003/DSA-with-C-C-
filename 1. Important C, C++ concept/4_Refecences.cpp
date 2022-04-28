#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int &r=a;      // Reference-> inatialize when named.

    a=54;         // changing value.

    cout<<a<<","<<r<<endl;
    return 0;
}