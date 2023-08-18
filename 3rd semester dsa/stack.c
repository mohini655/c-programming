#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};

void push(int data, struct stack* a){
    if(a -> top == a -> size -1){
        printf("stack overflaw \n ");
    }
    else{
        a -> top++;
        a -> arr[a -> top] = data;
    }
}

void pop(struct stack *a){
    if(a -> top == -1){
        printf("stack is empty \n ");
    }
    else{
        a -> top--;
    }
}

void print(struct stack a){
    if(a.top == -1){
        printf("stack is empty \n ");
    }
    while(a.top > -1){
        printf("%d ", a.arr[a.top]);
        a.top--;
    }printf("\n");
}

int peek(struct stack a, int i){
    if(i < 0 || i > a.top){
        printf("invalid index\n");
        return -1;
    }
    else{
        int value = a.arr[i];
        return value;
    }
}
int main(){
    struct stack a;
    a.top = -1;
    a.size = 50;
    a.arr = (int *)malloc(sizeof(int)*a.size);
    push(3, &a);
    push(5, &a);
    push(7, &a);
    push(9, &a);
    printf("top = %d \n", a.top);
    print(a);
    printf("top = %d \n", a.top);
    printf("value at 0 is %d \n", peek(a , 0));
    printf("value at 1 is %d \n", peek(a , 1));
    printf("value at 2 is %d \n", peek(a , 2));
    printf("value at 3 is %d \n", peek(a , 3));
    pop(&a);
    print(a);
    printf("top = %d \n", a.top);
    pop(&a);
    print(a);
    printf("top = %d \n", a.top);
}