#include<stdio.h>
enum daysofweek {
    sunday,
    monday,
    tuesday,
    wednesday,
    thuresday,
    friday,
    saturday
};
int main(){
    int daynum;
    printf("enter number for day ");
    scanf("%d", &daynum);
    enum daysofweek day = (enum daysofweek)daynum;
    if(day == thuresday){
        printf("thuresday \n");
    }
}