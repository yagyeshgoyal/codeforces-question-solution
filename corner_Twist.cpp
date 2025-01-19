#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n][m];
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int j=0; j<m; j++){
                arr[i][j] = s[j]-'0';
            }
        }

        int arr1[n][m];
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int j=0; j<m; j++){
                arr1[i][j] = s[j]-'0';
            }
        }

        for(int i=0; i<n-1; i++){
            for(int j=0; j<m-1; j++){
                if(arr[i][j] != arr1[i][j]){
                    if(arr[i][j] == 1){
                        if(arr1[i][j] == 2){
                            arr[i][j] = 2;
                            arr[i+1][j+1] = (arr[i+1][j+1]+1)%3;
                            arr[i][j+1] = (arr[i][j+1] + 2)%3;
                            arr[i+1][j] = (arr[i+1][j] + 2)%3;
                        }
                        else{
                            arr[i][j] =  0;
                            arr[i+1][j+1]  = (arr[i+1][j+1]+2)%3;
                            arr[i][j+1] = (arr[i][j+1] + 1)%3;
                            arr[i+1][j] = (arr[i+1][j] + 1)%3;
                        }
                    }
                    else if(arr[i][j] == 2){
                        if(arr1[i][j] == 1){
                            arr[i][j] = 1;
                            arr[i+1][j+1]  = (arr[i+1][j+1]+2)%3;
                            arr[i][j+1] = (arr[i][j+1] + 1)%3;
                            arr[i+1][j] = (arr[i+1][j] + 1)%3;
                        }
                        else{
                            arr[i][j] = 0;
                            arr[i+1][j+1]  = (arr[i+1][j+1]+1)%3;
                            arr[i][j+1] = (arr[i][j+1] + 2)%3;
                            arr[i+1][j] = (arr[i+1][j] + 2)%3;
                        }
                    }
                    else{
                        if(arr1[i][j] == 1){
                            arr[i][j] = 1;
                            arr[i+1][j+1]  = (arr[i+1][j+1]+1)%3;
                            arr[i][j+1] = (arr[i][j+1] + 2)%3;
                            arr[i+1][j] = (arr[i+1][j] + 2)%3;
                        }
                        else{
                            arr[i][j] =  2;
                            arr[i+1][j+1]  = (arr[i+1][j+1]+2)%3;
                            arr[i][j+1] = (arr[i][j+1] + 1)%3;
                            arr[i+1][j] = (arr[i+1][j] + 1)%3;
                        }
                    }
                }
            }
        }

        bool flage = true;
        for(int j=0; j<m; j++){
            if(arr[n-1][j] != arr1[n-1][j]){
                flage = false;
                break;
            }
        }

        bool flage2 = true;
        for(int i=0; i<n; i++){
            if(arr[i][m-1] != arr1[i][m-1]){
                flage2 = false;
                break;
            }
        }

        if(flage2 && flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}