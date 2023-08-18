#include<stdio.h>
int fibb(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibb(n-1) + fibb(n-2);
}
int power(int a , int b){
    int c = 1;
    while(b > 0){
        c = c * a;
        b--;
    }
    return c;
}
int main() {
    int n;
    printf("enter length of series \n");
    scanf("%d" , &n);
    for(int i = 0;i<n;i++){
        printf("%d ", fibb(i));
    }printf("\n");

    int a = 5,b = 3;
    int ans = power(a, b);
    printf("%d \n" , ans);
}