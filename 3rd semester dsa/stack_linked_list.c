#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
};

struct stack{
    struct node *head;
};
struct node *head = NULL;



void push(struct stack* a, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = a -> head;
    a -> head = temp;
}

int pop(struct stack *a){
    if(a -> head == NULL){
        printf("empty\n");
        return -1;
    }
    int val = a -> head -> value;
    a -> head = a -> head -> next;
    return val;
}
int isempty(struct stack *a){
    if(a -> head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(struct stack* a){
    if(a -> head == NULL){
        printf("empty\n");
        return -1;
    }
    int val = a -> head -> value;
    return val;
}

void print(struct stack * a){
    struct node * top = a -> head;
    while(top != NULL){
        printf("%d ", top -> value);
        top = top -> next;
    }printf("\n");
}

int main(){
    struct stack* a;
    push(a, 4);
    push(a, 2);
    push(a, 7);
    print(a);
    printf("peek = %d\n", peek(a));
    push(a, 3);
    push(a, 12);
    push(a, 6);
    push(a, 9);
    print(a);
    printf("peek = %d\n", peek(a));
    pop(a);
    print(a);
    printf("peek = %d\n", peek(a));
    pop(a);
    print(a);
    printf("peek = %d\n", peek(a));
}