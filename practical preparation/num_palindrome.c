#include<string.h>
#include<stdbool.h>
#include<stdio.h>
int palindrome(int num){
    int reverse = 0;
    int orignal = num;
    while(num){
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if(reverse == orignal){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num;
    printf("Enter number -> \n");
    scanf("%i" , &num);

    if(palindrome(num)){
        printf("palindrome \n");
    }
    else{
        printf("not palindrome \n");
    }

    char str[10] = "mohini";
    printf("%s \n" , str);
    printf("size -> %d \n" , sizeof(str));
    printf("length -> %d \n" , strlen(str));



    double f = 34.34200;
    printf("%.2lf \n" , f);

    printf("%d \n", 10 < 9);

    printf("%i \n" , num);

    char fullname[100];
    printf("Enter your fullname ->\n");
    // scanf("%s \n" , fullname);
    printf("enter");
    fgets(fullname, sizeof(fullname), stdin);
    printf("%s \n", fullname);
    return 0;
}