#include<stdio.h>
#include<string.h>
struct mydata
{
    char name[10];
    int class;
    float marks;
};

void printdata(struct mydata data){
    printf("name = %s \n", data.name);
    printf("class = %d \n", data.class);
    printf("marks = %f \n", data.marks);
}
int main(){
    struct mydata this;
    this.marks = 87.4;
    this.class = 13;
    strcpy(this.name , "mohini");
    printdata(this);
}