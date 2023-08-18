#include<stdio.h>
int main(){
  /*  FILE *fptr;
    fptr = fopen("tt.txt" , "r");
    if(fptr == NULL){
        printf("file doesn't exist \n");
    }
    else{
        fclose(fptr);
    }*/
    FILE *ftr;
    ftr = fopen("text.txt", "r");

    int ch; 
    fscanf(ftr , "%d" , &ch);
    printf("char = %d\n", ch);
    fscanf(ftr , "%d" , &ch);
    printf("char = %d\n", ch);
    fscanf(ftr , "%d" , &ch);
    printf("char = %d\n", ch);
    fscanf(ftr , "%d" , &ch);
    printf("char = %d\n", ch);
    fclose(ftr);

    FILE *myfile;
    myfile = fopen("myfile.txt", "w");
    fprintf(myfile, "this is my file \n");
    fclose(myfile);
    myfile = fopen("myfile.txt", "a");
    fprintf(myfile, "i can write anything here");
    fclose(myfile);


    myfile = fopen("myfile.txt", "r");
    char str[100];
    fgets(str, 100 , myfile);
    printf("%s", str);
    fgets(str, 100 , myfile);
    printf("%s \n", str);
    fclose(myfile);

}