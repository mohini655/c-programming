#include<stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int end;
    int size;
    int start;
};

int isfull(struct queue *q){
    if(((q -> end + 1) % q -> size) == q -> start){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct queue *q){
    if(q -> start == q -> end){
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
        q -> end = q -> end + 1 % q -> size;
        q -> arr[q -> end] = data;
    }
}

int dequeue(struct queue *q){
    int val = -1;
    if(isempty(q)){
        printf("queue underflaw\n");
    }
    else{
        q -> start = q -> start + 1 % q -> size;
        val = q -> arr[q -> start];
    }
    return val;
}

void print(struct queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
    }
    int i = q -> start + 1 % q -> size;
    while(i != q -> end){
        printf("%d  ", q -> arr[i]);
        i = i + 1 % q -> size;
    }printf("%d  \n", q -> arr[i]);
}

int main(){
    struct queue Q;
    Q.size = 5;
    Q.arr = (int*)malloc(sizeof(int)*Q.size);
    Q.end = 0;
    Q.start = 0;
    enqueue(&Q , 4);
    enqueue(&Q , 7);
    enqueue(&Q , 2);
    enqueue(&Q , 9);
    enqueue(&Q , 6);
    print(&Q);
    // enqueue(&Q , 5);
    // enqueue(&Q , 15);
    // enqueue(&Q , 25);
    // enqueue(&Q , 35);
    // print(&Q);
    if(isfull(&Q)){
        printf("yes it is full \n");
    }
    if(isempty(&Q)){
        printf("yes it is empty \n");
    }
    // printf("dequeue = %d\n", dequeue(&Q));
    // print(&Q);
    // printf("dequeue = %d\n", dequeue(&Q));
    // enqueue(&Q , 19);
    // enqueue(&Q , 26);
    // print(&Q);

}