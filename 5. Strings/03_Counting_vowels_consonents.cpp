#include <iostream>
using namespace std;

void counting(char A[])
{
    int vcount, ccount;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'o' || A[i] == 'O' || A[i] == 'i' || A[i] == 'I' || A[i] == 'u' || A[i] == 'U')
        {
            vcount++;
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            ccount++;
        }
    }
    printf("%d", vcount);
    printf("\n%d", ccount-24);
}
int main()
{
    char s[] = "How are you";
    counting(s);

    return 0;
}