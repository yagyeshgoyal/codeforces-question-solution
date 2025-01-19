#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findans(int i, int j, int n, int m, vector< vector<int> >&arr,vector<vector<int>>&dp){
    if(i<0 || i>=n || j==m){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int result = arr[i][j] + max(findans(i-1,j+1,n,m,arr,dp) , max(findans(i,j+1,n,m,arr,dp), findans(i+1,j+1,n,m,arr,dp)));

    return dp[i][j] = result;

}

int main()
{

    int n;
    cin>>n;
    int m ;
    cin>>m;

    vector<vector<int> >arr;
    for(int i=0; i<n; i++){
        vector<int>v;
        for(int j=0; j<m; j++){
            int a;
            cin>>a;

            v.push_back(a);
        }
        arr.push_back(v);
    }

    vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
    int result = 0;
    for(int i=0; i<n; i++){
        int ans = findans(i,0,n,m,arr,dp);

        result = max(ans,result);
    }

    cout<<result<<endl;

    return 0;
}