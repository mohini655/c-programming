#include<stdio.h>
void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int a , b;
    printf("enter numbers \n");
    scanf("%d\t%d", &a, &b);
    printf("before swapping : \n");
    printf("a = %d and b = %d \n", a, b);
    swap(&a, &b);
    printf("after swapping \n");
    printf("a = %d and b = %d \n", a, b);
    

}