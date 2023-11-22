#include<stdio.h>
void merge(int *arr, int low, int high, int mid){
    int i , j , k;
    i = low;
    j = mid + 1;
    k = low;
    int newarr[high + 1];
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            newarr[k++] = arr[i++];
        }
        else{
            newarr[k++] = arr[j++];
        }
    }
    while(i <= mid){
        newarr[k++] = arr[i++];
    }
    while(j <= high){
        newarr[k++] = arr[j++];
    }
    for(int i = low; i<= high;i++){
        arr[i] = newarr[i];
    }
}
void merge_sort(int *arr, int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}
int main(){
    int arr[7] = {9, 7 , 5, 4, 13, 2, 0};
    merge_sort(arr, 0, 6);
    printf("sorted array : ");
    for(int i = 0; i< 7;i++){
        printf("%d ", arr[i]);
    }
}