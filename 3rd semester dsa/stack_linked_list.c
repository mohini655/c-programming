#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
};

struct stack{
    struct node *head;
    int size;
};

void push(struct stack* a, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = a -> head;
    a -> head = temp;
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
    if(isempty(a) == 1){
        printf("empty");
    }
    int val = a -> head -> value;
    return val;
}

int main(){
    struct stack* a;
    push(a, 4);
    printf("%d ", peek(&a));
    push(a, 2);
    printf("%d ", peek(&a));
    push(a, 7);
    printf("%d ", peek(&a));

}