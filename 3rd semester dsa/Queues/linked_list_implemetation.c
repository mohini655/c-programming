#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct queue
{
    struct node *f;
    struct node *r;
};

int isempty(struct queue *q)
{
    if (q->f == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("queue overflaw");
    }
    temp->value = val;
    temp->next = NULL;
    if (isempty(q))
    {
        q->f = temp;
    }
    else
    {
        q->r->next = temp;
    }
    q->r = temp;
}

int dequeue(struct queue * q){
    int val = -1;
    if(isempty(q)){
        printf("queue is empty\n");
    }
    else{
        struct node *temp = q -> f;
        q -> f = q -> f -> next;
        val = temp -> value;
        free(temp);
    }
    return val;
}

void print(struct queue *q)
{
    struct node *temp = q->f;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct queue q;
    q.f = NULL;
    q.r = NULL;
    if (isempty(&q))
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue is not empty\n");
    }
    enqueue(&q, 4);
    enqueue(&q, 14);
    enqueue(&q, 42);
    enqueue(&q, 5);
    if (isempty(&q))
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue is not empty\n");
    }
    print(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    print(&q);
}