#include<stdio.h>
int main(){
    int row , col;
    printf("enter the number of rows and columns : ");
    scanf("%d \n %d" , &row, &col);
    int arr[row][col];
    printf("enter the elements : ");
    for(int i= 0 ;i<row;i++){
        for(int j = 0;j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("sparse matrix : \nrow  col value\n");
    for(int i= 0 ;i<row;i++){
        for(int j = 0;j < col; j++){
            if(arr[i][j] != 0){
                printf("%d  %d  %d\n",i, j, arr[i][j]);
            }
        }
    }
}