#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        // int count[n] = {0};
        // for(int i=0; i<=n-2; i++){
        //     for(int j=i+1; j<=n-1; j++){
        //         if(arr[i]<arr[j]){
        //             count[j]++;
        //         }
        //         else{
        //             count[i]++;
        //         }
        //     }
        // }

        // for(int i=0; i<n; i++){
        //     cout<<n-count[i]<<" ";
        // }
        // cout<<endl;
        vector<pair<int,int>>mp;

        for(int i=0; i<n; i++){
            pair<int,int>p = make_pair(arr[i],i);
            mp.push_back(p);
            
        }

        sort(mp.begin(),mp.end());
        int ans[n] = {0};
        int k = n;
        for(auto i: mp){
            ans[i.second] = k;
            k--;
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}