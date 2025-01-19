#include <stdio.h>
#include <unistd.h>    
#include <sys/types.h> 
#include <sys/wait.h>  
#include <stdlib.h>    

int main() {
    pid_t pid = fork(); 

    if (pid < 0) {
        
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
      
        printf("Child process . PID: %d\n", getpid());
    
        exit(0); 
    } else {
        
        printf("Parent process  PID: %d\n", getpid());
       
    }

    return 0;
}
