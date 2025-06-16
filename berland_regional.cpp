#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

class Compare {
public:
    bool operator()(pair<int,int> a, pair<int,int> b)
    {
        if (a.first > b.first) {
            return true;
        }
        else if (a.first == b.first
                 && a.second < b.second) {
            return true;
        }

        return false;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int brr[n];
        for(int i = 0; i<n; i++){
            cin>>brr[i];
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare>pq;

        for(int i =0; i<n; i++){
            pq.push({arr[i],brr[i]});
        }

        map<int,vector<long long int>>mp;

        while(!pq.empty()){
            auto front = pq.top();
            pq.pop();

            if(mp.count(front.first)){
                int v = mp[front.first].size();
                mp[front.first].push_back(mp[front.first][v-1] + front.second);
            }
            else{
                mp[front.first].push_back(0);
                mp[front.first].push_back(front.second);
            }
        }

        set<pair<int,int>>st;
        for(auto i : mp){
            st.insert({i.first, i.second.size()-1});
        }

        vector<long long int>ans;
        for(int i = 1; i<=n; i++){
            vector<pair<int,int>>v;
            long long int temp = 0;
            for(auto j : st){
                int pos = ((j.second)/i)*i;
                temp = temp + mp[j.first][pos];

                if(j.second == i){
                    v.push_back({j.first,j.second});
                }
            }

            for(auto j : v){
                st.erase(j);
            }

            ans.push_back(temp);
        }

        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;

    }

    return 0;
}