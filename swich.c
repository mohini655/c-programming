#include<stdio.h>
int fun(){
    static int count = 0;
    count++;
    return count;
}
int i = 8;
int main(){
    int a;
    printf("enter the value of a : \n");
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        printf("value is 4 \n");
        break;
    default:
        printf("this is default \n");
        break;
    }

    printf("%d ", fun());
    printf("%d " , fun());
    printf("%d " , i);
}