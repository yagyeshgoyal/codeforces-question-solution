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

        map<int,vector<int>>mp;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            mp[a].push_back(i);
        }

        long long int ans = INT64_MAX;

        for(auto i : mp){
            int a = i.first;
            int s = 0;
            long long int temp = 0;
            for(auto j : i.second){
                temp = temp + 1ll*(j-s)*a;
                s = j+1;
            }
            temp  = temp + 1ll*(n-s)*a;

            ans = min(ans,temp);
        }

        cout<<ans<<endl;

    }

    return 0;
}