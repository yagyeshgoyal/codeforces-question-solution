#include<iostream>
#include<limits.h>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        map<int,int>yogi;

        int mini = INT_MAX;
        
        for(int i=0; i<n*n; i++){
            int k;
            cin>>k;
            mini = min(mini,k);
            yogi[k]++;
        }

        int arr[n][n];

        arr[0][0] = mini;

        for(int i=1; i<n; i++){
            arr[i][0] = arr[i-1][0] + a;
        }

        for(int j=1; j<n; j++){
            for(int i=0; i<n; i++){
                arr[i][j] = arr[i][j-1] + b;
            }
        }

        bool flage = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(yogi[arr[i][j]] > 0){
                    yogi[arr[i][j]]--;
                }
                else{
                    flage = false;
                    break;
                }
            }
            if(flage == false){
                break;
            }
        }


        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        
    }


    return 0;
}