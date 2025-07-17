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
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]] = i;
        }
        int brr[n];
        for(int i=0; i<n; i++){
            cin>>brr[i];
        }

        reverse(brr,brr+n);
        vector<pair<int,int>>ans;
        map<int,int>mp2;
        for(int i=0;i<n; i++){
            if(brr[i] == arr[i]){
                continue;
            }
            else{
                int k = mp[brr[i]];
                mp[arr[i]] = k;
                mp[arr[k]] = i;
                swap(arr[i],arr[k]);
                swap(brr[n-k-1],brr[n-i-1]);
                ans.push_back({i+1,k+1});
                mp2[i]++;
                i--;
                if(mp2[i+1]>=n){
                    break;
                }
            }
        }

        bool flage = true;
        for(int i=0; i<n; i++){
            if(arr[i] != brr[i]){
                flage = false;
                break;
            }
        }

        if(flage){
            cout<<ans.size()<<endl;
            for(auto i : ans){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }


    }

    return 0;
}