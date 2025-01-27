#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

long long int findans(int a, int b, vector<int>&arr, vector<vector<long int>>&dp){
    if(a>=arr.size()){
        return 0;
    }

    if(dp[a][b] != -1){
        return dp[a][b];
    }


    dp[a][b] = (arr[a] + findans(a+b , b, arr, dp))%mod;

    return dp[a][b];
}

int main()
{
    int n,q;
    cin>>n>>q;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int a ;
        cin>>a;

        arr.push_back(a);
    }

    vector<vector<long int>>dp(n+1,vector<long int>(n+1,-1));

    int ans = 0;

    while(q--){
        int a,b;
        cin>>a>>b;
        if(dp[a][b] != -1){
            ans = (ans + dp[a][b])%mod;
        }
        else{

        ans = (ans + findans(a,b,arr,dp))%mod;
        }
    }

    cout<<ans<<endl;

    return 0;
}