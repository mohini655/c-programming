#include<stdio.h>

int partitioning(int l, int h, int arr[]){
    int pivot = arr[l];
    int i = l, j = h;
    while(i<j){
        while(arr[i] <= pivot)i++;
        while(arr[j] > pivot)j--;
        if(i< j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i];
    arr[i] = arr[l];
    arr[l] = temp;
    return i;
}
int main(){
    int arr[] = {8   ,6,3,9,4,6,12,2,3,55};
    printf("hello");
    printf("%d", partitioning(0,9,arr));
    printf("hello");
}