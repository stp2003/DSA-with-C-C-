#include <iostream>
using namespace std;

void is_Pallindrome(char A[], char C[])
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

    for (i = 0, j = 0; A[i] != '\0' && C[j] != '\0'; i++, j++)
    {
        if (A[i] != C[j])
        {
            break;
        }
    }
    if (A[i] == C[j])
        printf("Pallidrome.");
    else
        printf("not");
}

int main()
{
    char s[] = "nitin";
    char q[] = "nitini";
    is_Pallindrome(s, q);

    return 0;
}