#include<iostream>
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
        map<int,int>mps;
        set<int>st;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            mps[arr[i]]++;
            st.insert(arr[i]);
        }

        vector<int>v;
        for(auto i : st){
            v.push_back(i);
        }
        int ans = n;
        for(int i=0; i<n; i++){
            int count = i;

            auto p = upper_bound(v.begin(),v.end(),arr[i]);
            // cout<<*p<<endl;
            while(p != v.end()){
                count = count + mps[*p];
                p++;
            }

            ans = min(ans,count);
            mps[arr[i]]--;
            // cout<<count<<endl;

        }

        cout<<ans<<endl;
    }


    return 0;
}