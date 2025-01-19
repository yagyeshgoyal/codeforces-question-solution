#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    char dest_file[100], source_file[100];
    int source_fd , dest_fd, nbyte;
    char *buffer;

    printf("Enter the name of existing file : ");
    scanf("%s", source_file);
    printf("Enter the name of new file : ");
    scanf("%s", dest_file);
    printf("enter number of byte to copy : ");
    scanf("%d", &nbyte);

    source_fd = open(source_file, O_RDONLY);
    if(source_fd<0){
        perror("Error opening source file\n");
        exit(0);
    }


    dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC,0.644);
    if(dest_fd<0){
        perror("error opening , creating destination file \n");
        close(source_fd);
        exit(0);
    }

    buffer = (char*)malloc(nbyte);
    if(buffer == NULL){
        perror("error allocating memory \n");
        close(source_fd);
        close(dest_fd);
        exit(0);
    }

    ssize_t read_bytes = read(source_fd, buffer , nbyte);
    if(read_bytes < 0){
        perror("error reading from sourcefile \n");
        free(buffer);
        close(source_fd);
        close(dest_fd);
        exit(0);
    }

    ssize_t write_bytes = write(dest_fd, buffer, read_bytes);
    if(write_bytes < 0){
        perror("error writing to destination file \n ");
        free(buffer);
        close(source_fd);
        close(dest_fd);
        exit(0);
    }

    printf("successfully copied \n");
    free(buffer);
    close(source_fd);
        close(dest_fd);
        exit(0);

        return 0;
}