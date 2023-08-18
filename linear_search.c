#include<stdio.h>
int linear_search(int arr[] , int n , int key){
    for(int i = 0;i <n ;i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n = 10;
    int arr[] = {2,5,6,3,6,34,65,2,65,9};
    int key = 8;
    int index = linear_search(arr , n, key);
    printf("%d \n", index);


}