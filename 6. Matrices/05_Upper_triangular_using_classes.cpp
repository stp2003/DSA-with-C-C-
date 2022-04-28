#include <iostream>
using namespace std;

class UpperTriangular
{
private:
    int *A;
    int n;

public:
    UpperTriangular()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    UpperTriangular(int n) 
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~UpperTriangular()
    {
        delete[] A;
    }
    void Set(int i, int j, int x);

    int Get(int i, int j);

    void Display();

    int GetDimension() { return n; }
};
void UpperTriangular::Set(int i, int j, int x)
{
    if (i >= j)
        //    A[n*(i-1)-((i-2)*(i-1))/2+(j-i)]=x;  // row major
        A[j * (j - 1) / 2 + (i - 1)] = x; // column major
}
int UpperTriangular::Get(int i, int j)
{
    if (i >= j)
        // return  A[n*(i-1)-((i-2)*(i-1))/2+(j-i)];  // row major
        return A[j * (j - 1) / 2 + (i - 1)]; // column malor
    return 0;
}
void UpperTriangular::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                // cout <<  A[n*(i-1)-((i-2)*(i-1))/2+(j-i)]  << " "; // row major
                cout << A[j * (j - 1) / 2 + (i - 1)] << " "; // column major
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    int d;
    cout << "Enter Dimensions: ";
    cin >> d;

    UpperTriangular dm(d);

    int x; // user input
    cout << "Enter All Elements: ";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            dm.Set(i, j, x);
        }
    }
    cout << "The matrix is: \n";
    dm.Display();

    return 0;
}