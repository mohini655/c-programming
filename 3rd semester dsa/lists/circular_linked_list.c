#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
};

void insertatend(struct node** tail, int data){
    struct node* temp ;
    temp = (struct node* )malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = (*tail) -> next;
    (*tail) -> next = temp;
    (*tail) = temp;
}

void insertatstart(struct node** head, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = data;
    struct node*ptr;
    while(ptr -> next != *head){
        ptr = ptr -> next;
    }
    ptr -> next = temp ;
    temp -> next = *head;
    (*head) = temp;
}

void deleteatindex(struct node** head, struct node** tail, int n){
    struct node* heady = *head;
    if(n == 1){
        (*head) = (*head) -> next;
        (*tail) -> next = (*head);
        free(heady);
    }
    while(n>2){
        heady = heady -> next;
        n--;
    }
    struct node* temp = heady -> next;
    heady -> next = temp -> next;
    if(temp -> next == *head){
        (*tail) = heady;
    }
    temp -> next = NULL;
    free(temp);
    
}


void print(struct node* head){
    struct node* heady = head;
    do{
        printf("%d ", heady -> value);
        heady = heady -> next;
    }
    while(heady != head);
    printf("\n");
}
int main(){
    struct node* head, *tail;
    head = (struct node* )malloc(sizeof(struct node));
    head -> value = 1;
    head -> next = head;
    tail = head;
    insertatend(&tail, 3);
    insertatend(&tail, 5);
    insertatend(&tail, 7);
    insertatend(&tail, 9);
    insertatstart(&head , -1);
    print(head);
    deleteatindex(&head, &tail, 6);
    print(head);
    printf("head = %d \n", head -> value);
    printf("tail = %d \n", tail -> value);

}