#include <iostream>
using namespace std;

class LowerTriangular
{
private:
    int *A;
    int n;

public:
    LowerTriangular()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    LowerTriangular(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangular()
    {
        delete[] A;
    }
    void Set(int i, int j, int x);

    int Get(int i, int j);

    void Display();

    int GetDimension() { return n; }
};
void LowerTriangular::Set(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = x;  // row major
        // A[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;  // column major
}
int LowerTriangular::Get(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];  // row major
        // return A[n*(j-1)-(j-2)*(j-1)/2+i-j]  // column malor
    return 0;
}
void LowerTriangular::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i * (i - 1) / 2 + j - 1] << " "; // row major
                // cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";  //column major
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

    LowerTriangular dm(d);

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
    cout<<"The matrix is: \n";
    dm.Display();

    return 0;
}