#include<stdio.h>
int fibb(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return fibb(n-1) + fibb(n-2);
    
}
int main(){
    int n = 6;
    for(int i = 0; i < n;i++){
        printf("%d  ", fibb(i));
    }

}