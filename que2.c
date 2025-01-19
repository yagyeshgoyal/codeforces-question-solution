#include <stdio.h>
#include <unistd.h>   // For fork(), getpid(), and getppid()
#include <sys/types.h> // For pid_t
#include <sys/wait.h>  // For wait()
#include <stdlib.h>    // For exit()

int main() {
    int n, i;
    printf("Enter the number of child processes to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            // Error handling if fork fails
            perror("Fork failed");
            exit(1);
        } else if (pid == 0) {
            // Child process
            printf("Child %d - PID: %d, Parent PID: %d\n", i + 1, getpid(), getppid());
            exit(0); // Terminate child process
        } else {
            // Parent process
            // Wait for the child process to complete
            wait(NULL);
        }
    }

    printf("Parent process (PID: %d) created %d child processes.\n", getpid(), n);
    return 0;
}
