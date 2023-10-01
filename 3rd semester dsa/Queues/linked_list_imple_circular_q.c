#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* next;
};

struct queue{
    struct node * f;
    struct node * r;
};

int isempty(struct queue * q){
    if(q -> f ==NULL && q -> r == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue * q, int val){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp ->data = val;
    if(isempty(q)){
        q -> f = temp;
        q -> r = temp;
        q -> r -> next = q -> f;
    }
    else{
        q -> r -> next = temp;
        q -> r = temp;
        q -> r -> next = q -> f;
    }
}

int dequeue(struct queue * q){
    int val = -1;
    if(isempty(q)){
        printf("queue is e");
    }
    else if(q -> r == q -> f){
        val = q -> r -> data;
        q -> r = q -> f = NULL;
    }
    else{
        struct node* temp = q -> f;
        val = temp -> data;
        q -> f = q -> f -> next;
        q -> r -> next = q -> f;
        free(temp);
    }
    return val;
}

void print(struct queue * q){
    struct node * temp = q -> f;
    do{
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    while(temp != q -> f);
    printf("\n");
}

int main(){
    struct queue * q;
    q -> f = NULL;
    q -> r = NULL;
    enqueue(q, 4);
    enqueue(q, 7);
    enqueue(q, 2);
    enqueue(q, 8);
    print(q);
    dequeue(q);
    dequeue(q);
    print(q);
    enqueue(q, 3);
    enqueue(q, 0);
    print(q);
}