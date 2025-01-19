#include<iostream>
#include<vector>
#include<map>
using namespace std;

struct value{
    bool flage;
    int targetnode;
    int depth;
};

value dfs(int node, map<int,int>&adj, vector<int>&ans,vector<bool>&visited){

    if(ans[node] != -1){
        return {false,-1,ans[node]};
    }

    if(visited[node] == true){

        ans[node]  = 2;
        return {true,node,2};
    }

    value temp;

    visited[node] = true;
    temp = dfs(adj[node], adj,ans,visited);

    if(temp.flage == true){
        ans[node] = 2;
        if(node == temp.targetnode){
            temp.targetnode = -1;
            temp.flage = false;
            return temp;
        }
        else{
            return temp;
        }
    }
    else{
        ans[node] = temp.depth + 1;
        temp.depth++;
        return temp;
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        // vector<int>prev;
        // vector<int>curr;
        map<int,int>adj;
        vector<bool>visited(n+1,false);
        vector<int>ans(n+1,-1);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            adj[i+1] = arr[i];
            // prev.push_back(1);
            // curr.push_back(0);
        }


        for(int i=1; i<=n; i++){
            if(visited[i] == false){
                visited[i] = true;
                value temp;
                temp = dfs(adj[i],adj,ans,visited);

                if(temp.flage == true){
                    ans[i] = 2;
                }
                else{
                    ans[i] = temp.depth + 1;

                }
                
            }
        }

        int result = 2;
        for(int i=1; i<=n; i++){
            result = max(result ,ans[i]);
            // cout<<ans[i]<<" ";
        }
        // cout<<endl;

        cout<<result<<endl;



        // int ans = 1;
        // while(1){
        //     ans++;
        //     vector<int>temp(n,0);
        //     for(int i=0; i<n; i++){
        //         if(prev[i]>0){
        //             curr[arr[i]-1] = 1;
        //         }
        //     }

        //     if(prev == curr){
        //         break;
        //     }

        //     prev = curr;
        //     curr = temp;
        // }

        // // for(int i=0; i<n; i++){
        // //     cout<<curr[i]<<" ";
        // // }
        // // cout<<endl;

        // cout<<ans<<endl;


    }


    return 0;
}