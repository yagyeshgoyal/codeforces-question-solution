#include<iostream>
#include<vector>
#include<map>
using namespace std;

void findprime(vector<bool>&isprime, int n){
    isprime[0] = false;
    isprime[1] = false;

    for(int i=2; i<=2*n; i++){
        if(isprime[i]){
            
            for(int j=i*2; j<=2*n; j = j+i){
                isprime[j] = false;
            }
        }
    }

    return ;
}

void dfs(int node, map<int,vector<int>>&adj, vector<int>&isgo, vector<int>&ans, int &count, vector<bool>&isprime, vector<bool>&visited){

    visited[node] = true;

    for(auto i : adj[node]){
        
        
        if(visited[i] == false){
            int diff = count - ans[node];

            if(isprime[diff]){
                if(diff%2 == 1){
                    count++;
                }
                else{
                    count = count + 2;
                }
            }
            
            ans[i] = count;
            count++;
            dfs(i,adj,isgo,ans,count,isprime,visited);
        }
    }

    return ;

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>isgo(n+1,0);
        map<int,vector<int>>adj;
        vector<int>ans(n+1,0);
        vector<bool>isprime(2*n +1 ,true);
        vector<bool>visited(n+1,false);

        findprime(isprime,n);

        for(int i=1; i<n; i++){
            int u,v;
            cin>>u>>v;
            
            adj[u].push_back(v);
            adj[v].push_back(u);

            isgo[u]++;
            isgo[v]++;
        }

        int count = 1;

        for(int i=1; i<=n; i++){
            if(isgo[i] == 1 && visited[i] == false){
                ans[i] = count;
                count++;
                dfs(i,adj,isgo,ans,count,isprime,visited);
            }
        }

        bool flage = true;

        for(int i=1; i<=n; i++){
            if(ans[i]>2*n){
                flage = false;
                break;
            }
        }

        if(flage){
            for(int i=1; i<=n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        

        

    }


    return 0;
}
