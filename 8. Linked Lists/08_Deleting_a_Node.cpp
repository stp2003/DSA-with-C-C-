#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p) // Counting Using Iterative Way
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l; // return length
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(p)) // Checking Validity
        return -1;

    if (index == 1) // For firdt node
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else // For any other node
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    printf("%d\n", Delete(first, 4));
    Display(first);

    return 0;
}