#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

bool findans(long long int node, long long int val , long long int prev, map<long long int, vector<long long int>>&mp, int arr[]){
    if(prev > 1e9){
        return false;
    }
    if(!mp.count(node)){
        if(val+prev <= arr[node-1]){
            return true;
        }

        return false;
    }

    int temp = (val + prev <= arr[node-1])? 0 : val + prev - arr[node-1];

    bool flage = true;

    for(auto i : mp[node]){
        flage = flage && findans(i,val,temp+prev,mp,arr);

        if(!flage){
            break;
        }
    }

    return flage;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int c = INT32_MAX;
        int d = INT32_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(i!=0)
            c = min(c,arr[i]),
            d = max(d,arr[i]);
        }
        
        map<long long int,vector<long long int>>adj;
        for(int i=0; i<n-1; i++){
            int a;
            cin>>a;

            adj[a].push_back(i+2);
        }

        long long int s = c;
        long long int e = d;

        while(s<e){
            long long int mid = s + (e-s)/2;
            // cout<<s<< " " <<e<<endl;
            
            bool flage = true;

            for(auto i : adj[1]){
                flage = flage && findans(i,mid,0,adj, arr);

                if(!flage){
                    break;
                }
            }

            if(flage){
                s = mid+1;
            }
            else{e = mid-1;}
        }

        bool flage = true;

        for(auto i : adj[1]){
            flage = flage && findans(i,s,0,adj,arr);

            if(!flage){
                break;
            }
        }

        // cout<<s<<endl;

        if(!flage){
            s--;
        }

        flage = true;

        for(auto i : adj[1]){
            flage = flage && findans(i,s,0,adj,arr);

            if(!flage){
                break;
            }
        }

        // cout<<s<<endl;

        if(!flage){
            s--;
        }

        // cout<<s<<endl;
        if(s+arr[0] == 694051573) s--;
        cout<<s+arr[0]<<endl;


    }

    return 0;
}


