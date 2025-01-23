#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void makevisited(int node, map<int,set<int>>&adj, vector<bool>&visited){
    visited[node] = true;

    queue<int>q;
    q.push(node);

    while(!q.empty()){
        auto front  = q.front();
        q.pop();

        for(auto i : adj[front]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int findremovingElement(map<int,set<int>>&adj, vector<int>&inorder){
    int p = max_element(inorder.begin()+1, inorder.end()) - inorder.begin();

    vector<int>k ;
    for(int i=1; i<inorder.size(); i++){
        if(inorder[i] == inorder[p]){k.push_back(i); }
    }

    int ans = k[0];
    long long int ansinorder = INT32_MAX;
    int countinorder = 0;

    for(int i=0; i<k.size(); i++){
        long long int temp  = INT32_MAX;
        int count = 0;
        for(auto j : adj[k[i]]){
            // temp = min<long long int>(temp, inorder[j]);
            if(temp>inorder[j]){
                temp = inorder[j];
                count = 1;
            }
            else if(temp == inorder[j]){
                count++;
            }
        }
        // cout<<temp<<" "<<count<<" "<<k[i]<<endl;
        if(temp < ansinorder){
            ans = k[i];
            ansinorder = temp;
            countinorder = count;
        }
        else if(temp == ansinorder && count > countinorder){
            ans = k[i];
            countinorder = count;
        }
        // cout<<ans<<endl;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;

        map<int,set<int>>adj;
        vector<int>inorder(n+1,0);

        for(int i=1; i<n; i++){
            int a,b;
            cin>>a>>b;
            adj[a].insert(b);
            adj[b].insert(a);
            inorder[a]++;
            inorder[b]++;

           
            
        }

        vector<bool>visited(n+1,false);
        inorder[0] = -1;

        int a = findremovingElement(adj,inorder);
        // cout<<a<<endl;

        for(auto i : adj[a]){
            adj[i].erase(a);
            inorder[i]--;
        }
        adj[a].clear();
        inorder[a] = -1;
        visited[a] = true;

        a = findremovingElement(adj, inorder);
        // cout<<a<<endl;

        for(auto i : adj[a]){
            adj[i].erase(a);
            inorder[i]--;
        }
        adj[a].clear();
        inorder[a] = -1;
        visited[true];

        int ans = 0;

        for(int i=1; i<=n; i++){
            if(visited[i] == false && inorder[i] == 0){
                ans++;
                visited[i] = true;
            }
            else if(visited[i] == false && inorder[i] >0 ){
                ans++;
                makevisited(i,adj,visited);
            }
        }


        cout<<ans<<endl;

    }

    return 0;
}

