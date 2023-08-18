#include<stdio.h>
int main(){
    int num;
    printf("enter number : \n");
    scanf("%d", &num);
    int arr[32];
    int i = 0;
    while(num > 0){
        arr[i] = num%2;
        num = num/2;
        i++;
    }
    printf("Binary number -> \n");
    for(int j = i-1;j>=0;j--){
        printf("%d " , arr[j]);
    }
}