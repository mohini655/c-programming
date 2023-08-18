#include<stdio.h>
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int num;
    printf("enter number \n");
    scanf("%d", &num);
    printf("factorial of %d is %d \n", num, fact(num));
}