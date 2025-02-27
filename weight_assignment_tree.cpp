#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        map<int,vector<int>>adj;
        int root = -1;
        for(int i=0; i<n; i++){
            int a ;
            cin>>a;
            a--;

            if(a == i){
                root = i;
            }
            
            adj[a].push_back(i);
            
        }
        



        vector<int>per;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            a--;
            per.push_back(a);
            
        }

        bool flage = true;

        vector<int>ans(n,-1);

        if(per[0] != root){
            flage = false;
            goto end;
        }

        ans[root] = 0;
        for(auto i : adj[root]){
            if(i!=root)
            ans[i] = ans[root]+1;
        }

        for(int i=1; i<n-1; i++){
            if(ans[per[i]] == -1){
                flage = false;
                break;
            }
            else if(ans[per[i+1]] == -1){
                bool temp  = false;
                for(auto j : adj[per[i]]){
                    if(j==per[i+1]){
                        temp = true;
                        break;
                    }
                }

                if(temp){
                    ans[per[i+1]] = ans[per[i]]+1;
                    for(auto j : adj[per[i]]){
                        ans[j] = ans[per[i]]+1;
                    }
                }
                else{
                    flage = false;
                    break;
                }
            }
            else if(ans[per[i]] < ans[per[i+1]]){
                for(auto j : adj[per[i]]){
                    ans[j] = ans[per[i]]+1;
                }
            }
            else{
                ans[per[i+1]] = ans[per[i]]+1;
                for(auto j : adj[per[i]]){
                    ans[j] = ans[per[i]]+1;
                }
            }
        }

        

        end:
        

        if(flage){
            vector<int>result(n,0);
            for(int i=0; i<n; i++){
                for(auto j : adj[i]){
                    result[j] = ans[j] - ans[i];
                }
            }

            for(int i=0; i<n; i++){
                cout<<result[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }

    return 0;
}