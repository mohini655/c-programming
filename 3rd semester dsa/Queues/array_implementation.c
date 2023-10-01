#include<stdio.h>
#include<stdlib.h>

struct queue{
    int *arr;
    int end;
    int size;
    int start;
};

int isfull(struct queue *q){
    if(q -> end == q -> size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct queue *q){
    if(q -> end == q -> start){
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
        q -> start++;
        val = q -> arr[q -> start];
    }
    return val;
}

void print(struct queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
    }
    int i = q -> start+1;
    while(i <= q -> end){
        printf("%d  ", q -> arr[i]);
        i++;
    }printf("\n");
}

int main(){
    struct queue Q;
    Q.size = 15;
    Q.arr = (int*)malloc(sizeof(int)*Q.size);
    Q.end = -1;
    Q.start = -1;

    if(isempty(&Q)){
        printf("Queue is empty\n");
    }

    enqueue(&Q, 7);
    enqueue(&Q, 4);
    enqueue(&Q, 8);
    enqueue(&Q, 5);

    if(isempty(&Q)){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }

    print(&Q);

    dequeue(&Q);
    dequeue(&Q);

    print(&Q);
    dequeue(&Q);
    print(&Q);

    enqueue(&Q, 14);
    enqueue(&Q, 28);
    enqueue(&Q, 15);

    print(&Q);


}