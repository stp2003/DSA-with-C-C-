#include <iostream>
using namespace std;

void counting_words(char A[])
{
    int word=1;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            word++;
        }
    }
    printf("%d", word);
}

int main()
{
    char S[] = "How are you";
    counting_words(S);

    return 0;
}