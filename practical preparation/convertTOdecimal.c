#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char binary[32];
    printf("enter binary number -> \n");
    scanf("%s" , &binary);
    int j = strlen(binary);
    int num = 0;
    for(int i = 0 ; i < strlen(binary) ;i++){
        j--;
        int val = pow(2,j);
        num = num + (val * (binary[i] - '0'));
    }
    printf("num = %d \n", num);
    printf("length of binary = %d \n", strlen(binary));
}