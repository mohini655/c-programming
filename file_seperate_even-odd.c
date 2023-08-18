#include<stdio.h>
int main(){
    FILE *main , *even, *odd;
    main = fopen("main_file.txt", "r");
    even = fopen("even_file.txt","w");
    odd = fopen("odd_file.txt","w");
    int num;
    while(fscanf(main, "%d", &num) != EOF){
        if(num % 2 == 0){
            fprintf(even, "%d ", num);
        }
        else{
            fprintf(odd, "%d " , num);
        }
    }
    fclose(main);
    fclose(even);
    fclose(odd);


    // copy file
    FILE *source, *destination;
    source = fopen("source_file.txt","r");
    destination = fopen("destination_file.txt", "w");
    if(source ==NULL){
        printf("not open\n");
    }
    if (destination == NULL) {
        printf("Failed to create/open the destination file.\n");
        fclose(source);
        return 1;
    }

    char ch;
    while((ch = fgetc(source)) != EOF){
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
}