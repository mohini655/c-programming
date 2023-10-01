#include<stdio.h>
#include<stdlib.h>

struct DEqueue{
    int r;
    int f;
    int *arr;
    int size;
};

int isfull(struct DEqueue * q){
    if(q -> r == q -> size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct DEqueue * q){
    if(q -> r == q -> f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueueR(struct DEqueue * q, int val){
    if(isfull(q)){
        printf("queue overflaw\n");
    }
    else{
        q -> r++;
        q -> arr[q->r] = val;
    }
}

void enqueueF(struct DEqueue * q, int val){
    if(q -> f == -1){
        printf("it has no space\n");
    }
    else{
        q -> arr[q -> f] = val;
        q -> f--;
    }
}

int dequeueF(struct DEqueue * q ){
    int val = -1;
    if(isempty(q)){
        printf("it has no elements\n");
    }
    else{
        q -> f++;
        val = q -> arr[q -> f];
    }
    return val;
}

int dequeueR(struct DEqueue * q ){
    int val = -1;
    if(isempty(q)){
        printf("it has no elements\n");
    }
    else{
        val = q -> arr[q -> r];
        q -> r--;
    }
    return val;
}

void print(struct DEqueue * q){
    int i = q -> f + 1;
    while(i != q -> r){
        printf("%d ", q -> arr[i]);
        i++;
    }printf("%d \n", q -> arr[i]);
}

int main(){
    struct DEqueue * q;
    q -> r = -1;
    q -> f =  -1;
    q -> size = 5;
    q-> arr = (int *)malloc(sizeof(int)*q -> size);
    enqueueR(q, 8);
    enqueueR(q, 18);
    enqueueR(q, 3);
    enqueueR(q, 7);
    enqueueR(q, 18);
    print(q);
    dequeueF(q);
    dequeueF(q);
    print(q);
    enqueueF(q, 9);
    enqueueF(q, 5);
    enqueueF(q, 6);
    print(q);
    dequeueR(q);
    dequeueR(q);
    dequeueR(q);
    print(q);

    
}