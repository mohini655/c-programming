#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node* next;
};

void print(struct node* head){
    while(head != NULL){
        printf("%d ", head -> value);
        head = head -> next;
    }printf("\n");
}

void insertatend(struct node** tail, int data){
    struct node* temp;
    temp = (struct node* )malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = NULL;
    (*tail) -> next = temp;
    (*tail) = temp;
}

void insertatstart(struct node** head, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = *head;
    (*head) = temp;
}

void deleteatindex(struct node** head, struct node** tail, int n){
    struct node* heady = *head;
    if(n == 1){
        (*head) = (*head) -> next;
        free(heady);
    }
    while(n>2){
        heady = heady -> next;
        n--;
    }
    struct node* temp = heady -> next;
    heady -> next = temp -> next;
    if(temp -> next == NULL){
        (*tail) = heady;
    }
    temp -> next = NULL;
    free(temp);
    
}
int main(){
    struct node* head, *tail;
    head = (struct node* )malloc(sizeof(struct node));
    tail = (struct node* )malloc(sizeof(struct node));
    head -> value = 9;
    tail -> value = 3;
    head -> next = tail;
    tail -> next = NULL;
    print(head);
    insertatend(&tail, 6);
    print(head);
    printf("%d\n", tail-> value);
    insertatstart(&head , 4);
    insertatstart(&head , 3);
    print(head);
    deleteatindex(&head, &tail,  4);
    print(head);
    printf("%d\n", tail-> value);
    tail = head;
    printf("%d\n", tail-> value);



}