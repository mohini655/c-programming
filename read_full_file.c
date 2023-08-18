#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("write.txt","r");
    char c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
    
}