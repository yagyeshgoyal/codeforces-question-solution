#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        map<int,int>mp;
        mp[a+b]++;
        mp[c-b]++;
        mp[d-c]++;

        int ans = 0;
        for(auto i : mp){
            ans = max(ans,i.second);
        }
        cout<<ans<<endl;

    }


    return 0;
}