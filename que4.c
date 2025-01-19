#include <stdio.h>
#include <limits.h>

#define MAX_PROCESSES 10

typedef struct {
    int id, burst_time, arrival_time, priority;
    int waiting_time, turnaround_time, response_time, remaining_time, completed;
} Process;

void calculate_fcfs(Process p[], int n);
void calculate_sjf(Process p[], int n);
void calculate_srtf(Process p[], int n);
void calculate_rr(Process p[], int n, int quantum);
void calculate_priority(Process p[], int n);
void calculate_and_print(Process p[], int n);

int main() {
    int n, choice, quantum;
    Process p[MAX_PROCESSES];
    
    printf("Enter number of processes (max %d): ", MAX_PROCESSES);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time, burst time and priority for process %d: ", i + 1);
        p[i].id = i + 1;
        scanf("%d %d %d", &p[i].arrival_time, &p[i].burst_time, &p[i].priority);
        p[i].remaining_time = p[i].burst_time;
        p[i].completed = 0;
    }
    
    printf("\nChoose Scheduling Algorithm:\n");
    printf("1. FCFS\n2. SJF\n3. SRTF\n4. Round Robin\n5. Non-Preemptive Priority\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: calculate_fcfs(p, n); break;
        case 2: calculate_sjf(p, n); break;
        case 3: calculate_srtf(p, n); break;
        case 4:
            printf("Enter time quantum for Round Robin: ");
            scanf("%d", &quantum);
            calculate_rr(p, n, quantum);
            break;
        case 5: calculate_priority(p, n); break;
        default: printf("Invalid choice\n"); return 1;
    }
    
    return 0;
}

void calculate_fcfs(Process p[], int n) {
    int current_time = 0;
    for (int i = 0; i < n; i++) {
        if (current_time < p[i].arrival_time) 
            current_time = p[i].arrival_time;
        p[i].waiting_time = current_time - p[i].arrival_time;
        p[i].response_time = p[i].waiting_time;
        current_time += p[i].burst_time;
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
    }
    calculate_and_print(p, n);
}

void calculate_sjf(Process p[], int n) {
    int current_time = 0, completed = 0, min_burst_time;
    Process *shortest;
    
    while (completed < n) {
        min_burst_time = INT_MAX;
        shortest = NULL;
        
        for (int i = 0; i < n; i++) {
            if (!p[i].completed && p[i].arrival_time <= current_time && p[i].burst_time < min_burst_time) {
                min_burst_time = p[i].burst_time;
                shortest = &p[i];
            }
        }
        
        if (shortest) {
            shortest->waiting_time = current_time - shortest->arrival_time;
            shortest->response_time = shortest->waiting_time;
            current_time += shortest->burst_time;
            shortest->turnaround_time = shortest->waiting_time + shortest->burst_time;
            shortest->completed = 1;
            completed++;
        } else {
            current_time++;
        }
    }
    calculate_and_print(p, n);
}

void calculate_srtf(Process p[], int n) {
    int current_time = 0, completed = 0, min_remaining_time;
    Process *shortest;
    
    while (completed < n) {
        min_remaining_time = INT_MAX;
        shortest = NULL;
        
        for (int i = 0; i < n; i++) {
            if (!p[i].completed && p[i].arrival_time <= current_time && p[i].remaining_time < min_remaining_time) {
                min_remaining_time = p[i].remaining_time;
                shortest = &p[i];
            }
        }
        
        if (shortest) {
            if (shortest->remaining_time == shortest->burst_time)
                shortest->response_time = current_time - shortest->arrival_time;
            
            shortest->remaining_time--;
            current_time++;
            
            if (shortest->remaining_time == 0) {
                shortest->completed = 1;
                shortest->turnaround_time = current_time - shortest->arrival_time;
                shortest->waiting_time = shortest->turnaround_time - shortest->burst_time;
                completed++;
            }
        } else {
            current_time++;
        }
    }
    calculate_and_print(p, n);
}

void calculate_rr(Process p[], int n, int quantum) {
    int current_time = 0, completed = 0;
    
    while (completed < n) {
        for (int i = 0; i < n; i++) {
            if (p[i].arrival_time <= current_time && !p[i].completed) {
                if (p[i].remaining_time == p[i].burst_time)
                    p[i].response_time = current_time - p[i].arrival_time;
                
                if (p[i].remaining_time > quantum) {
                    current_time += quantum;
                    p[i].remaining_time -= quantum;
                } else {
                    current_time += p[i].remaining_time;
                    p[i].remaining_time = 0;
                    p[i].completed = 1;
                    p[i].turnaround_time = current_time - p[i].arrival_time;
                    p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
                    completed++;
                }
            }
        }
    }
    calculate_and_print(p, n);
}

void calculate_priority(Process p[], int n) {
    int current_time = 0, completed = 0, highest_priority;
    Process *high_priority;
    
    while (completed < n) {
        highest_priority = INT_MAX;
        high_priority = NULL;
        
        for (int i = 0; i < n; i++) {
            if (!p[i].completed && p[i].arrival_time <= current_time && p[i].priority < highest_priority) {
                highest_priority = p[i].priority;
                high_priority = &p[i];
            }
        }
        
        if (high_priority) {
            high_priority->waiting_time = current_time - high_priority->arrival_time;
            high_priority->response_time = high_priority->waiting_time;
            current_time += high_priority->burst_time;
            high_priority->turnaround_time = high_priority->waiting_time + high_priority->burst_time;
            high_priority->completed = 1;
            completed++;
        } else {
            current_time++;
        }
    }
    calculate_and_print(p, n);
}

void calculate_and_print(Process p[], int n) {
    int total_wt = 0, total_tat = 0, total_rt = 0;
    
    printf("\nP#\tAT\tBT\tPri\tWT\tTAT\tRT\n");
    for (int i = 0; i < n; i++) {
        total_wt += p[i].waiting_time;
        total_tat += p[i].turnaround_time;
        total_rt += p[i].response_time;
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].id, p[i].arrival_time, p[i].burst_time,
               p[i].priority, p[i].waiting_time, p[i].turnaround_time, p[i].response_time);
    }
    
    printf("\nAverage Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
    printf("Average Response Time: %.2f\n", (float)total_rt / n);
}
