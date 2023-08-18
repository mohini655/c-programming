#include<stdio.h>
void upper(char *str){
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] >='a' && str[i] <='z'){
            str[i] = str[i] -'a' + 'A';
        }
    }
}
void grades(int num){
    if(num < 40){
        printf("you have got E grade");
    }
    else if(num >= 40 && num < 50){
        printf("you have got D grade");
    }
    else if(num >= 50 && num < 60){
        printf("you have got C grade");
    }
    else if(num >= 60 && num < 75){
        printf("you have got B grade");
    }
    else if(num >= 75){
        printf("you have got A grade");
    }
    else{
        printf("enter valid marks");
    }
}
int main(){
    char str[] = "MohiniLodhI";
    upper(str);
    printf("%s \n" , str);
    printf("enter your marks : ");
    int num;
    scanf("%d" , num);
    grades(num);
}