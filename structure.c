#include<stdio.h>
#include<string.h>
struct student
    {
        char name[20];
        int Roll_No;
        float percentage;
    };
int main(){
    
    struct student S1;
    strcpy(S1.name, "mohini");
    S1.Roll_No = 10;
    S1.percentage = 80.95;
    printf("%s \n", S1.name);
    printf("%d \n" , S1.Roll_No);
    printf("%f \n", S1.percentage);

    struct student s2[50];
    s2[0].Roll_No = 1;
    s2[0].percentage = 87.34;
    strcpy(s2[0].name , "tanish");
    printf("%s \n", s2[0].name);
    printf("%d \n" , s2[0].Roll_No);
    printf("%f \n", s2[0].percentage);
    

    
}