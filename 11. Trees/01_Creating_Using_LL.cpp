#include <stdio.h>
#include <stdlib.h>
#include <queue>

// Queue Header File

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}

void enqueue(struct Queue *q, struct Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
        printf("Queue is Full.");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

struct Node *root = NULL;

// Tree code:

void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    printf("Eneter root value: ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("enter right child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void Preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void LevelOrder(struct Node *root)
{
    struct Queue q;
    create(&q, 100);

    printf("%d ", root->data);
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        root = dequeue(&q);

        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            enqueue(&q, root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            enqueue(&q, root->rchild);
        }
    }
}

int count(struct Node *root)
{
    if (root)
    {
        return count(root->lchild) + count(root->rchild) + 1;
    }
    return 0;
}

int countLeaf(struct Node *root)
{
    if (root)
    {
        int x = countLeaf(root->lchild);
        int y = countLeaf(root->rchild);

        if (root->lchild == NULL && root->rchild == NULL)
            return x + y + 1;
        else
            return x + y;
    }
    return 0;
}

int countDeg2(struct Node *root)
{
    if (root)
    {
        int x = countDeg2(root->lchild);
        int y = countDeg2(root->rchild);

        if (root->lchild != NULL && root->rchild != NULL)
            return x + y + 1;
        else
            return x + y;
    }
    return 0;
}

int countDEG_1or2(struct Node *root)
{
    if (root)
    {
        int x = countDEG_1or2(root->lchild);
        int y = countDEG_1or2(root->rchild);

        if (root->lchild != NULL || root->rchild != NULL)
            return x + y + 1;
        else
            return x + y;
    }
    return 0;
}

int countDeg_1(struct Node *root)
{
    if (root)
    {
        int x = countDeg_1(root->lchild);
        int y = countDeg_1(root->rchild);

        if (root->lchild != NULL ^ root->rchild != NULL)
            return x + y + 1;
        else
            return x + y;
    }
    return 0;
}

int height(struct Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
        return 0;

    x = height(root->lchild);
    y = height(root->rchild);

    if (x > y)
        return x + 1;
    else
        return y + 1;
}



int main()
{
    printf("\n\n(If no left or right child then enter -1)\n\n");

    Treecreate();

    printf("\n\nThe Preorder Traversal is: ");
    Preorder(root);

    printf("\n\nThe Postorder Traversal is: ");
    Postorder(root);

    printf("\n\nThe Inorder Traversal is: ");
    Inorder(root);

    printf("\n\nThe Levelorder Traversal is: ");
    LevelOrder(root);

    printf("\n\nCount: %d ", count(root));
    printf("\n\nHeight: %d ", height(root));
    printf("\n\nLeaf node: %d ", countLeaf(root));
    printf("\n\nDegree 2 node: %d ", countDeg2(root));
    printf("\n\nDegree 1 or 2 node: %d ", countDEG_1or2(root));
    printf("\n\nDegree exactly 1 node: %d ", countDeg_1(root));

    printf("\n\n\n");

    return 0;
}


