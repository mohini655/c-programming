#include<stdio.h>
#include<stdbool.h>
bool isprime(int num){
    int flag = 1;
    for(int i = 2; i< num;i++){
        if(num%i == 0){
            flag = 0;
        }
    }
    if(flag == 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num;
    printf("enter number \n");
    scanf("%d", num);
    if(isprime(num)){
        printf("prime number \n");
    }
    else{
        printf("not prime \n");
    }

}