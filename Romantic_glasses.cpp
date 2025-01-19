#include<iostream>
#include<vector>
using namespace std;

int solve(int n, long long int arr[], long long int a , long long int b, int index, vector<vector<vector<long long int>>> &dp){
    if(a==b){
        return 1;
    }
    
    if(index == n || n==1){
        return 0;
    }

    if(dp[a][b][index] != -1){
        return dp[a][b][index];
    }
    

    int ans1 = solve(n, arr, b, a+arr[index], index+1, dp);

    int ans2 = solve(n, arr, arr[index-1], arr[index], index+1, dp);

    
    if(ans1 == 1 || ans2 ==1){
        dp[a][b][index] = 1;
    }
    else{
        dp[a][b][index] = 0;
    }

    return dp[a][b][index];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // bool final = false;
        // for(int i=0; i<n-1; i = i+1){
        //     long long int suma=0;
        //     long long int sumb=0;
        //     bool ans = false;
        //     for(int j=i; j<n; j= j+2){
        //         suma= suma+arr[j];
        //         if(suma == sumb){
        //             ans = true;
        //             break;
        //         }

        //         if(j+1<n)
        //         sumb= sumb+arr[j+1];

            //     if(suma == sumb){
            //         ans = true;
            //         break;
            //     }
            // }
            // if(ans == true){
            //     final = true;
            //     break;
            // }
        // }

        // if(final){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        vector<vector<vector<long long int>>> dp(n*n+1, vector<vector<long long int>>(n*n+1, vector<long long int>(n+1,-1)));

        int ans = solve(n, arr, arr[0],arr[1], 2, dp);


        if(ans == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}