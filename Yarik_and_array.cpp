#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int solve(int &n, int s, int status, int arr[], int sum, vector<int>&dp){

    if(status == abs(arr[s])%2 || s >= n){
        return 0;
    }

    if(dp[s] != -1){
        return dp[s];
    }

    int temp_sum = sum + solve(n,s+1,abs(arr[s])%2,arr,arr[s+1],dp);

    dp[s] =  max(sum, temp_sum);

    return max(sum, temp_sum);

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        int ans = INT_MIN;

        vector<int>dp(n+1,-1);

        for(int i=0; i<n; i++){
        
            int status = (abs(arr[i])%2)^1;
            // cout<<status<<endl;
            int maxy =max(arr[i],solve(n,i,status,arr,arr[i],dp));
            // cout<<maxy<<endl;

            ans = max(ans,maxy);
        }

        cout<<ans<<endl;
    }


    return 0;
}