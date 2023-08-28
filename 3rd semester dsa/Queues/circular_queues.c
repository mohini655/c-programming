#include<stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int end;
    int size;
    int start;
};

int isfull(struct queue *q){
    if(q -> end == q -> start){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct queue *q){
    if(q -> end == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q , int data){
    if(isfull(q)){
        printf("queue overflaw\n");
    }
    else{
        q -> end++;
        q -> arr[q -> end] = data;
    }
}

int dequeue(struct queue *q){
    int val = -1;
    if(isempty(q)){
        printf("queue underflaw\n");
    }
    else{
        val = q -> arr[0];
        for(int i = 0;i != q -> end;i++){
            q -> arr[i] = q -> arr[i + 1];
        }
        q -> end--;
    }
    return val;
}

void print(struct queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
    }
    for(int i = 0;i <= q -> end ;i++){
        printf("%d  ", q -> arr[i]);
    }printf("\n");
}
int main(){

}