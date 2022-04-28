#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("stack is full!\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct Node *t;
    int x = -1;

    if (top == NULL)
        printf("Stack is Empty!\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;
    printf("The stack is: \n");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int peek(int pos)
{
    int i;
    Node *p = top;

    for (i = 0; p != NULL && i < pos - 1; i++)
    {
        p = p->next;
    }
    if (p != NULL)
        return p->data;
    else
        return -1;
}

int stackTop()
{
    if (top)
        return top->data;
    return -1;
}

int isEmpty()
{
    return top ? 0 : 1;
}

int isFull()
{
    Node *t = new Node;
    int r = t ? 1 : 0;
    free(t);
    return r;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    Display();

    printf("%d is the deleted value.\n", pop());

    printf("%d is the peek value.\n", peek(2));

    printf("%d is the stack top value.\n", stackTop());

    printf("%d is the empty value.\n", isEmpty());
    
    printf("%d is the full value.\n", isFull());

    return 0;
}
