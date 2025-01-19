#include<stdio.h>
#include<stdbool.h>

int main(){
    
    int A[3] = {1,2,3};

    int arr[6][2] = {{1,1}, {2,2}, {3,3}, {1,2},{2,3},{1,3}};

    int count = 0;

    for(int i=0; i<6; i++){
        if(arr[i][0] == arr[i][1]){
            count++;
        }
    }

    if(count ==3){
        printf("Entered relation R is Reflexive. \n");
    }
    else{
        printf("Entered relation R is not Reflexive. \n");
    }

    bool flage = true;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]){
                flage = true;
                break;
            }
            else{
                flage = false;
            }
        }

        if(flage == false){
            break;
        }
    }

    if(flage){
        printf("Entered relation R is Symmetric. \n");
    }
    else{
        printf("Entered relation R is not Symmetric. \n");
    }

    flage = true;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(arr[i][1] == arr[j][0]){
                for(int z=0; z<6; z++){
                    if(arr[z][0] == arr[i][0] && arr[z][1] == arr[j][1]){
                        flage = true;
                        break;
                    }
                    else{
                        flage = false;
                    }
                }
            }
            if(flage == false){
                break;
            }
        }
        if(flage == false){
            break;
        }
    }

    if(flage){
        printf("Entered relation R is Transitive. \n");
    }
    else{
        printf("Entered relation R is not Transitive. \n");
    }

    



}