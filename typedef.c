#include<stdio.h>
typedef int (*opr)(int , int);
int add(int a, int b){
    return a + b;
}
int sub(int a , int b){
    return a - b;
}
int main(){
    int a, b;
    char o;
    printf("entr two numbers ");
    scanf("%d , %d" , &a, &b);
    printf("enter operation");
    scanf("%c ", &o);
    opr op;
    if(o == '+'){
        op = add;
    }
    else{
        op = sub;
    }
    int ans = op(a,b);
    printf("%d \n", ans);
}