#include <iostream>
using namespace std;

void Lower_Case(char A[])
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        A[i] = A[i] + 32;
    }
    printf("%s", A);
}

void Upper_Case(char A[])
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        A[i] = A[i] - 32;
    }
    printf("\n%s", A);
}

void Toppel(char A[])
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
        else if (A[i] >= 'a' && A[i] <= 122)
            A[i] -= 32;
    }
    printf("\n%s", A);
}

int main()
{
    char S[] = "WELCOME";
    char p[] = "welcome";
    char q[] = "weLcOMe";
    Lower_Case(S);
    Upper_Case(p);
    Toppel(q);

    return 0;
}