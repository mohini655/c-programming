#include<stdio.h>
int main(){
    int A[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int B[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int C[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int D[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            D[i][j] = A[i][j] + (B[i][j] * C[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d \t" ,D[i][j]);
        }printf("\n");
    }
}