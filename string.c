#include<stdio.h>
void concatenate_string(char str1[] , char str2[]){
    int i, j;
    for(i = 0;str1[i] != '\0' ; i++);
    for(j = 0;str2[j] != '\0' ;j++){
        str1[i++] = str2[j];
    }
    str1[i] = '\0';
}
int main(){
    char str1[] = "mohini ";
    char str2[] = "lodhi";
    concatenate_string(str1 , str2);
    printf("%s" , str1);
}