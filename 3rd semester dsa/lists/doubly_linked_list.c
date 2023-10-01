#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
    struct node* prev;
};

void insertatend(struct node** tail, int data){
    struct node* temp ;
    temp = (struct node* )malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next =  NULL;
    temp -> prev = (*tail);
    (*tail) -> next = temp;
    (*tail) = temp;
}

void insertatstart(struct node** head, int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = data;
    temp -> next = (*head);
    temp -> prev = NULL;
    (*head) -> prev = temp;
    (*head) = temp;
}

void deleteatindex(struct node** head, struct node** tail, int n){
    struct node* heady = *head;
    if(n == 1){
        (*head) = (*head) -> next;
        (*head) -> prev = NULL;
        heady -> next = NULL;
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
    else{
        temp -> next -> prev = heady;
    }
    temp -> next = NULL;
    temp -> prev = NULL;
    free(temp);
    
}


void print(struct node* head){
    while(head != NULL){
        printf("%d ", head -> value);
        head = head -> next;
    }
    printf("\n");
}
int main(){
    struct node* head, *tail;
    head = (struct node* )malloc(sizeof(struct node));
    head -> value = 1;
    head -> next = NULL;
    head -> prev = NULL;
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