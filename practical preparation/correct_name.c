#include<stdio.h>
#include<string.h>
int main(){
    char fullname[100];
    char abbreviation[100];
    int i , j = 0;
    printf("enter your full name : \n");
    fgets(fullname, sizeof(fullname) , stdin);
    for (i = 0; fullname[i] != '\0'; i++) {
        if (i == 0 || fullname[i - 1] == ' ') {
            abbreviation[j] = toupper(fullname[i]);
            j++;
        }
    }
    abbreviation[j] = '\0';
    printf("add = %s \n", abbreviation);

}