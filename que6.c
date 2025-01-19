#include<stdio.h>
#include<stdlib.h>


int main(){

    FILE  *file;
    char filename[]  = "name.txt";
    char buffer[100];

    file  = fopen(filename, "w");
    if(file == NULL){
        perror("error");
        return 0;
    }

    fprintf(file, "this is my file");
    fclose(file);

    file = fopen(filename, "r");
    if(file == NULL){
        perror("error");
        return 0;
    }

    printf("initial open file : \n");
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        printf("%s", buffer);;
    }

    fclose(file);

    file  = fopen(filename, "w");
    if(file == NULL){
        perror("error");
        return ;
    }

    fprintf(file, "this is my updated string ");
    printf(file); 

}


