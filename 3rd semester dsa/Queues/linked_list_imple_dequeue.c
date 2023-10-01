#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct queue{
    struct node * f;
    struct node * r;
};

int isempty(struct queue *q){
    if(q -> f == NULL && q -> r == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueueR(struct queue* q, int val){
    struct node * temp = (struct node* )malloc(sizeof(struct node));
    temp -> data = val;
    temp -> prev = NULL;
    temp -> next = NULL;
    if(isempty(q)){
        q -> r = q -> f = temp;
    }
    else{
        q -> r -> next = temp;
        temp -> prev = q -> r;
        q -> r = temp;
    }
}

void enqueueF(struct queue* q , int val){
    struct node * temp = (struct node* )malloc(sizeof(struct node));
    temp -> data = val;
    temp -> prev = NULL;
    temp -> next = NULL;
    if(isempty(q)){
        q -> r = q -> f = temp;
    }
    else{
        temp -> next = q -> f;
        q -> f -> prev = temp;
        q -> f = temp;
    }
}

int dequeueF(struct queue *q){
    int val = -1;
    if(isempty(q)){
        printf("queue is empty\n");
    }
    else{
        struct node * temp = q -> f;
        q -> f = q -> f -> next;
        q -> f -> prev = NULL;
        val = temp -> data;
        free(temp);
    }
    return val;
}

int dequeueR(struct queue* q){
    int val = -1;
    if(isempty(q)){
        printf("queue is empty\n");
    }
    else{
        struct node* temp = q -> r;
        q -> r = q -> r -> prev;
        q -> r -> next = NULL;
        val  = temp -> data;
        free(temp);
    }
    return val;
}

void print(struct queue *q)
{
    struct node *temp = q->f;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct queue* q;
    q = (struct queue* )malloc(sizeof(struct queue));
    q -> f = NULL;
    q -> r = NULL;
    enqueueR(q, 5);
    enqueueF(q, 9);
    enqueueR(q, 3);
    enqueueF(q, 9);
    enqueueR(q, 8);
    print(q);
    printf("%d removed\n", dequeueR(q));
    print(q);
    printf("%d removed\n", dequeueF(q));
    print(q);
}