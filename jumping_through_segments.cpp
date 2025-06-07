#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

bool check(int mid, vector<pair<int,int>>& arr){
    int n = arr.size();
    int ll = 0;
    int rr = 0;

    for(auto i : arr){
        ll = max(ll-mid , i.first);
        rr = min(rr+mid , i.second);
        if(ll > rr){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>>arr;
        for(int i=0; i<n; i++){
            int x, y;
            cin>>x>>y;
            arr.push_back({x, y});
        }   

        int l=0;
        int h=1e9;
        int ans=1e9;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(mid,arr)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}