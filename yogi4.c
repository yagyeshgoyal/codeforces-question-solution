#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of matrix : ");
    scanf("%d", &n);

    int adj_mat[n][n];
    printf("Enter all the value of matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            scanf("%d", &adj_mat[i][j]);
        }
    }
    

    int reflexiv_clouser_mat[n][n];
    int symmetric_clouser_mat[n][n];
    int transitive_clouser_mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            reflexiv_clouser_mat[i][j] = adj_mat[i][j];
            symmetric_clouser_mat[i][j] = adj_mat[i][j];
            transitive_clouser_mat[i][j] = adj_mat[i][j];
        }
    }

    printf("Reflexive closure : \n");
    for(int i=0; i<n; i++){
        
        reflexiv_clouser_mat[i][i]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            printf("%d ", reflexiv_clouser_mat[i][j]);
        }
        printf("\n");
    }


    printf("Symmetric closure : \n");
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
           if(adj_mat[i][j] == 1){
            symmetric_clouser_mat[i][j] = 1;
            symmetric_clouser_mat[j][i] = 1;
           }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            printf("%d ", symmetric_clouser_mat[i][j]);
        }
        printf("\n");
    }


    printf("Transitive closure : \n");
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
           if(adj_mat[i][j] == 1){
            for(int z = 0; z<n; z++){
                if(adj_mat[j][z] == 1){
                    transitive_clouser_mat[i][z] = 1;
                }
            }
           }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            printf("%d ", transitive_clouser_mat[i][j]);
        }
        printf("\n");
    }



}