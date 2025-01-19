#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findans(int i, int suma, int sumb,int a, int b, int arr[], int n,vector<vector<vector<int>>>&dp){
    if(i==n){
        return 0;
    }

    if(dp[i][suma][sumb] != -1){
        return dp[i][suma][sumb];
    }

    int ans1 = findans(i+1,suma + arr[i]*a, sumb,a,b,arr,n,dp);
    int ans2 = findans(i+1,suma, sumb + arr[i]*b,a,b,arr,n,dp);

    return dp[i][suma][sumb] = max(ans1,ans2);
}
int findans(int i, int suma, int sumb,int a, int b, int arr[], int n,vector<map<pair<int,int>,int>>&dp){
    if(i==n){
        return max(suma,sumb);
    }

    if(dp[i].count({suma,sumb})){
        return dp[i].count({suma,sumb});
    }

    int ans1 = findans(i+1,suma + arr[i]*a, sumb,a,b,arr,n,dp);
    int ans2 = findans(i+1,suma, sumb + arr[i]*b,a,b,arr,n,dp);

    return dp[i][{suma,sumb}]= min(ans1,ans2);
}
int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a;
    cin>>a;
    int b;
    cin>>b;
    sort(arr,arr+n);
    int k = 100000000;

    // vector<vector<vector<int>>>dp(n,vector<vector<int>>(1,vector<int>(1,-1)));
    vector<map<pair<int,int>,int>>dp(n);

    // cout<<"k"<<endl;
    int ans = findans(0,0,0,a,b,arr,n,dp);
    cout<<ans<<endl;
    return 0;
}