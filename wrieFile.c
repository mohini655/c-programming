#include<stdio.h>
int main(){
    FILE *ptr;
   /* ptr = fopen("write.txt" ,"w");
    fprintf(ptr, "this is a generated file");
    fclose(ptr);*/

    char str1[10];
    char str2[10];
    ptr = fopen("write.txt","r");
    int num, num2;
    fscanf(ptr, "%d " , &num);
    fscanf(ptr, "%d " , &num2);
    fscanf(ptr, "%s " , str1);
    fscanf(ptr, "%s " , str2);
    fclose(ptr);
    printf("%d \n" , num);
    printf("%d \n" , num2);
    printf("%s \n" , str1);
    printf("%s \n" , str2);
}