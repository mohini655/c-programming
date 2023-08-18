#include<stdio.h>
int main(){
    int num = 5;
    if(num <= 1){
        goto red;
    }
    int square = num * num;
    printf("square of num is %d \n", square);
    red:
        printf("end of program");
}