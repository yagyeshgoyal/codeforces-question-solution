#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


void findans(int node, int parent, vector<int>&arr, map<int,vector<int>>&adj, vector<long long int>&f, vector<long long int>&g){
    f[node] = max<long long int>(arr[node],arr[node]-g[parent]);
    g[node] = min<long long int>(arr[node],arr[node]-f[parent]);
    for(auto i : adj[node]){
        if(i == parent) continue;
        findans(i,node,arr,adj,f,g);
        
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        map<int,vector<int>>adj;

        for(int i=0; i<n-1; i++){
            int a, b;
            cin>>a>>b;
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        vector<long long int>f(n);
        vector<long long int>g(n);
        f[0] = g[0] = arr[0];

        for(auto i : adj[0]){
            findans(i,0,arr,adj,f,g);
        }

        for(auto i : f){
            cout<<i<<" ";
        }
        cout<<endl;

    }

    return 0;
}