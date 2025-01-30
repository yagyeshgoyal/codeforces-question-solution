#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

bool findans(int node, int val ,int prev, map<int, vector<int>>&mp, int arr[]){

    if(!mp.count(node)){
        if(val+prev <= arr[node-1]){
            return true;
        }

        return false;
    }

    int temp = (val + prev <= arr[node-1])? 0 : val + prev - arr[node-1];

    bool flage = true;

    for(auto i : mp[node]){
        flage = flage && findans(i,val,temp,mp,arr);

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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        map<int,vector<int>>adj;
        for(int i=0; i<n-1; i++){
            int a;
            cin>>a;

            adj[a].push_back(i+2);
        }

        int s = 0;
        int e = 200000;

        while(s<=e){
            int mid = s + (e-s)/2;
            cout<<s<< " " <<e<<endl;
            
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


        cout<<e+arr[0]<<endl;


    }

    return 0;
}