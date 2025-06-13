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

        vector<vector<int>>ans;
        ans.push_back({1,1,n});
        int k = 1;
        for(int i = 2; i<=n; i++){
            ans.push_back({i,1,k});
            ans.push_back({i,k+1,n});
            k++;
        }

        cout<<ans.size()<<endl;
        for(auto i : ans){
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }


    }

    return 0;
}