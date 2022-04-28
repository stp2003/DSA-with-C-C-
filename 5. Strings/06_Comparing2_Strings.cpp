#include <iostream>
using namespace std;

void Comparing(char A[], char B[])
{
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            break;
        }
    }
    if (A[i] == B[j])
        printf("equal\n");
    else if (A[i] < B[j])
        printf("B is big\n");
    else
        printf("A is big");
}

int main()
{
    char A[] = "painter";
    char B[] = "Painter";
    Comparing(A, B);

    return 0;
}