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
        set<int>st;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            st.insert(arr[i]);
        }

        int k = 0;
        vector<set<int>>v(n);
        int j = 0;

        for(int i = n-1; i>=0; i--){
            v[j].insert(arr[i]);
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                st.erase(arr[i]);
                k++;
            }
            if(v[j].size() == st.size() + k){
                j++;
                k = 0;
            }
        }

        cout<<j<<endl;

        


    }


    return 0;
}