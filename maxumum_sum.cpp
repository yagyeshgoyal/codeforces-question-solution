#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve1(int arr[], int n , int k , int index, int a , int b, long long int &ans){
    if(index >= k){
        long long int sum = 0;
        for(int i=a; i<=b; i++){
            sum = sum + arr[i];
        }
       
        ans =  max<long long int>(ans , sum);
        return ;
    }

    solve1(arr, n, k, index+1, a+2, b, ans);

    solve1(arr, n, k, index+1, a,b-1, ans);

    return ;
}
void solve2(int arr[], int n , int k , int index, int a , int b, long long int &ans, 
vector<map<int,int>>&dp, long long int sum){

    if(index >= k){
        // long long int sum = 0;
        // for(int i=a; i<=b; i++){
        //     sum = sum + arr[i];
        // }
       
        ans =  max<long long int>(ans , sum);
        return ;
    }

    if(dp[index].count(sum)){
        return ;
    }

    solve2(arr, n, k, index+1, a+2, b, ans, dp, sum-arr[a] - arr[a+1]);

    solve2(arr, n, k, index+1, a,b-1, ans, dp , sum - arr[b]);

    dp[index][sum] = 1;
    return ;
}

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        

        int arr[n];
        long long int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }

        int a = 0, b = n-1;

        sort(arr, arr+n);

        // for(int i=0; i<k;i++){
        //     if(arr[a] >= arr[b]){
        //         b--;
        //     }
        //     else{
        //         int temp = arr[b] - arr[a];
        //         if(arr[a+1] > temp){
        //             b--;
        //         }
        //         else{
        //             a = a+2;
        //         }
        //     }
        // }

        // long long int ans = 0;
        // for(int i=a; i<=b; i++){
        //     ans = ans + arr[i];
        // }
        vector<map<int,int>>dp(n+1);
        long long int ans = 0;
        // solve1(arr,n,k,0,a,b,ans);
        solve2(arr,n,k,0,a,b,ans,dp,sum);

        cout<<ans<<endl;
    }


    return 0;
}