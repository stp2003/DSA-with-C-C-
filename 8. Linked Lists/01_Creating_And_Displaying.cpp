#include <stdio.h>

#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

} *first = NULL; // Global

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p) // Iterative Function
{
    while (p != NULL)
    {
        printf("%d-> ", p->data);
        p = p->next;
    }
    printf("Null");
}

void RDisplay(struct Node *p) // Recursive Function
{
    if (p != NULL)
    {
        RDisplay(p->next); // Pehle call karega phir print karega (Array ulta print karega)
        printf("%d-> ", p->data);
        RDisplay(p->next); // Pehle print karega phir call karega (Array sidha print karega)
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    // int i;

    // int size;
    // printf("Enter the size of List: ");
    // scanf("%d", size);
    // int A[size];

    // printf("Enter the List Elements:\n");
    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", A[i]);
    // }

    create(A, 8);

    Display(first); // Iterative function call
    // RDisplay(first); // Recursive function call

    return 0;
}
