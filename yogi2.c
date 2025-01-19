#include<stdio.h>

int main(){

    char s[100] = "I am ";
    char s2[100] = "the best";

    int count = 0;
    
    while(s[count] != '\0'){
        count++;
    }

    int i=0;
    while(s2[i] != '\0'){
        s[count++] = s2[i++];
       
    }

    printf("string after concatinat both the string is : %s \n", s);
    printf("Length of the final string is : %d \n", count);


}