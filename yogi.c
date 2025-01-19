#include <stdio.h>

void Union(int set1[], int set2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (set1[i] < set2[j])
            printf(" %d ", set1[i++]);
        else if (set2[j] < set1[i])
            printf(" %d ", set2[j++]);
        else {
            printf(" %d ", set2[j++]);
            i++;
        }
    }
 
    while (i < n)
        printf(" %d ", set1[i++]);
    while (j < m)
        printf(" %d ", set2[j++]);
}

void Intersection(int set1[], int set2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (set1[i] < set2[j])
            i++;
        else if (set2[j] < set1[i])
            j++;
        else 
        {
            printf(" %d ", set2[j++]);
            i++;
        }
    }
}
void Difference(int set1[], int set2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (set1[i] < set2[j]){
            printf(" %d ", set1[i++]);
        }
        else if (set2[j] < set1[i])
            j++;
        else 
        {   j++;
            i++;
        }
    }

    while(i<n){
        printf(" %d ", set1[i++]);
    }
}
 
int main()
{   
    int n, m;
    printf("Enter the size of both the set : \n");
    scanf("%d", &n);
    scanf("%d", &m);

    int set1[n] ;
    int set2[m] ;

    printf("Enter the all element of set1 in sorted way : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &set1[i]);
    }
    printf("Enter the all element of set2 in sorted way : \n");
    for(int i=0; i<m; i++){
        scanf("%d", &set2[i]);
    }

    printf("Union of both the set : ");
    Union(set1, set2, n, m);
    printf("\n");


    printf("Intersection of both the set : ");
    Intersection(set1, set2, n, m);
    printf("\n");

    printf("Difference of set1-set2  : ");
    Difference(set1, set2, n, m);
    printf("\n");


    return 0;
}