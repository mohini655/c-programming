#include<stdio.h>
void selection(int *arr, int n){
    int min, temp;
    for(int i = 0;i<n-1;i++){
        min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main(){
    int arr[] = {2,8,3,8,2,9,7,6,54,1,0};
    selection(arr, 11);
    for(int i = 0;i<11;i++){
        printf("%d ", arr[i]);
    }
}