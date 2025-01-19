#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

int bfs(int n,int node, int i,unordered_map<int,vector<int>>&mp){
    vector<int>visited(n+1,false);

    queue<int>q;
    q.push(node);
    int count = 1;
    visited[node] = true;
    visited[i] = true;

    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int j=0; j<mp[t].size(); j++){
            if(!visited[mp[t][j]]){
                visited[mp[t][j]] = true;
                q.push(mp[t][j]);
                count++;
            }
        }
    }
    return count;
}

void findans(int n,unordered_map<int,vector<int>>&mp,int node,int par,vector<int>&dis,vector<int>&low,
    vector<int>&parent,vector<bool>&visited, int time, long long int &ans,vector<int>&sz,vector<vector<int>>&nas){

        visited[node] = true;
        parent[node] = par;
        dis[node] = time;
        low[node] = time;
        sz[node] = 1;
        // time++;

        for(auto i : mp[node]){
            if(!visited[i]){
                findans(n,mp,i,node,dis,low,parent,visited,time+1,ans,sz,nas);
                sz[node] = sz[node] + sz[i];
                low[node] = min(low[node],low[i]);

                if(low[i]>dis[node]){

                    // int k = bfs(n,node,i,mp);
                    int k = min(sz[node],sz[i]);
                    int p = n-k;

                    ans = min(ans, ((1ll*k*(k-1))/2)+((1ll*p*(p-1))/2));
                    nas.push_back({node,i});
                }
            }
            else if(i != par){
                low[node] = min(low[i],low[node]);
            }
        }
        

        // if(count>1 && par == -1){
        //     ans.push_back(node);
        // }
    }

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,e;
        cin>>n>>e;

        unordered_map<int,vector<int>>mp;

        for(int i=0; i<e; i++){
            int u,v;
            cin>>u>>v;

            mp[u].push_back(v);
            mp[v].push_back(u);
        }

        vector<int>dis(n+1,-1);
        vector<int>low(n+1,-1);
        vector<int>parent(n+1,-1);
        vector<bool>visited(n+1,false);
        vector<int>sz(n+1,0);
        int time = 0;

        long long int ans = (1ll*n*(n-1))/2;

        vector<vector<int>>nas;
        for(int i=1; i<=n; i++){
            if(visited[i] == false){
                findans(n,mp,i,-1,dis,low,parent,visited,1,ans,sz,nas);
            }
        }

        // for(int i=0; i<nas.size(); i++){
        //     int k = min(sz[nas[i][0]],sz[nas[i][1]]);
        //     int p = n-k;
        //     // cout<<"k "<<k<<" "<<p<<endl;
        //     ans = min(ans, ((1ll*k*(k-1))/2)+((1ll*p*(p-1))/2));
        // }

       cout<<ans<<endl;
    }


    return 0;
}