#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
#define ll  long long int
using namespace std;

bool comp1(pair<ll,ll> a,pair<ll,ll> b){
    return a.second<b.second;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    map<int,vector<pair<int,int>>>mp;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
            mp[arr[i][j]].push_back({i,j});
        }
    }

    ll sum=0;
    auto it = mp.begin();
    while(it!=mp.end()){
        ll sz = (it->second).size();
        if((it->second).size()>=2){
            sort(it->second.begin(), it->second.end());
            for(int i=0 ; i<sz ; ++i)
                sum+=(2*i+1-sz)*(it->second)[i].first;
 
            sort(it->second.begin(), it->second.end(),comp1);
            // debug(a)
            for(int i=0 ; i<sz ; ++i)
                sum+=(2*i+1-sz)*(it->second)[i].second;
        }
        ++it;
    }
    cout << sum << endl;

    // cout<<ans<<endl;

    return 0;
}