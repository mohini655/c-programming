#include<stdio.h>
int calculater(char c, int a, int b){
    switch (c)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    case '%':
        return a % b;
        break;
    default:
        printf("invalid operater\n");
        break;
    }
}
int main(){
    int a, b;
    printf("enter numbers\n");
    scanf("%d %d", &a, &b);
    char c;
    printf("enter operation -> ");
    scanf("%c \n", &c);
    printf("%d \n", calculater(c, a, b));
    
}