#include <iostream>
using namespace std;

void Reverse(char A[])
{
    char B[7];
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i -= 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
    printf("%s", B);
}

int main()
{
    char s[] = "Python";
    Reverse(s);

    return 0;
}