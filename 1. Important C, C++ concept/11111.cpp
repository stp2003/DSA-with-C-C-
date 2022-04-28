#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    double Area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r1(10, 8);
    Rectangle r2(r1);
    cout << "The area of rectangle is: " << r2.Area();

    return 0;
}
