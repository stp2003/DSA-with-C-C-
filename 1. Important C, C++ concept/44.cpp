#include <iostream>
using namespace std;

class ADD
{
public:
    ADD()
    {
        cout << "The sum is: ";
    }
};

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int sum, a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    sum = add(a, b);
    ADD a1;
    cout << sum;
    return 0;
}