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

        int arr[n];
        map<int,int>mp;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        map<int,long long int>mp2;
        for(auto i : mp){
            mp2[i.second]++;
        }

        stack<int>st;
        long long int ans = 0;
        for(int i =1;i<=n; i++){
            st.push(i);

            while(st.size()>0 && mp2[i]>0){
                ans = ans + st.top();
                st.pop();
                mp2[i]--;
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}