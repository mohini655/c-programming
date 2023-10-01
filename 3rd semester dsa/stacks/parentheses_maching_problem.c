#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};

void push(char data, struct stack* a){
    if(a -> top == a -> size -1){
        printf("stack overflaw \n ");
    }
    else{
        a -> top++;
        a -> arr[a -> top] = data;
    }
}

int pop(struct stack *a){
    if(a -> top == -1){
        return 0;
    }
    else{
        a -> top--;
        return 1;
    }
}

int main(){
    struct stack a;
    a.size = 500;
    a.top = -1;
    a.arr = (char*)malloc(sizeof(char) * a.size);
    char str[500];
    printf("enter string with parenthess\n");
    scanf("%s", &str);
    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '('){
            push(str[i], &a);
        }
        else if(str[i]  == ')'){
            int val = pop(&a);
            if(val == 0){
                flag = 1;
                break;
            }
        }
    }
    if((a.top != -1) || (flag == 1)){
        printf("unbalanced\n");
    }
    else{
        printf("balanced\n");
    }

}