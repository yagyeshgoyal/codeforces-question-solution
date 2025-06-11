#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, map<int,vector<pair<int,int>>>&adj, vector<int>&dp, vector<int>&id){
    for(auto it : adj[node]){
        if(dp[it.first] == 0){
            dp[it.first] = dp[node] + (it.second <= id[node]);
            id[it.first] = it.second;
            // cout<<node<<" "<<it.first<<" "<<dp[it.first]<<" "<<id[it.first]<<'\n';
            dfs(it.first,adj,dp,id);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<bool>visited(n+1,false);
        // int ans = 1;
        visited[1] = true; 

        map<int,vector<pair<int,int>>>adj;

        for(int i = 0; i<n-1; i++){
            int a,b;
            cin>>a>>b;

            adj[a].push_back({b,i+1});
            adj[b].push_back({a,i+1});
            
        }
        vector<int>dp(n+1,0);
        vector<int>id(n+1,0);
        dp[1] =1;
        dfs(1,adj,dp,id);
        

        int ans = 0;
        for(int i=1; i<=n; i++) ans=max(ans,dp[i]);
        cout<<ans<<'\n';

    }

    return 0;
}