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
        int n,m;
        cin>>n>>m;

        int arr[n][m];
        map<int,int>mp;
        for(int i = 0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                mp[arr[i][j]]++;
            }
        }

        priority_queue<pair<int,int>>pq;
        for(auto i : mp){
            pq.push({i.first,i.second});
        }

        int num = pq.top().first;
        // cout<<num<<endl;

        priority_queue<pair<int,int>>pq1;

        for(int i = 0; i<n; i++){
            // cout<<"k"<<endl;
            int count = 0;
            for(int j=0; j<m; j++){
                if(num == arr[i][j]){
                    count++;
                }
            }
            pq1.push({count,i});
        }

        priority_queue<pair<int,int>>pq2;
        for(int j=0; j<m; j++){
            int count = 0;
            for(int i=0; i<n; i++){
                if(num == arr[i][j]){
                    count++;
                }
            }
            pq2.push({count,j});
        }

        // cout<<"j"<<endl;

        auto top1 = pq1.top();
        auto top2 = pq2.top();
        vector<pair<int,int>>v;
        while(!pq2.empty()){
            auto t = pq2.top();
            pq2.pop();
            v.push_back(t);
        }
        int count = 0;

        while(!pq1.empty()){
            auto t = pq1.top();
            pq1.pop();
            

            for(auto i : v){
               int temp = t.first + i.first;
               if(arr[t.second][i.second] == num){
                temp--;
               } 
               count = max(count,temp);
            }

        }

        auto top = pq.top();
        pq.pop();
        top.second = top.second - count;
        if(top.second > 0){
            cout<<top.first<<endl;
        }
        else if(pq.size() > 0){
            cout<<max(top.first - 1,pq.top().first)<<endl;
        }
        else{
            cout<<0<<endl;
        }


    }

    return 0;
}