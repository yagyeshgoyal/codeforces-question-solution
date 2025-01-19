#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<queue>
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
        int maxi = -1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            maxi = max(maxi,arr[i]);
        }

        
        if(maxi == arr[n-1]){
            if(mp[maxi] >1){
                cout<<maxi*2<<endl;
            }
            else{
                sort(arr,arr+n);
                cout<<maxi+arr[n-2]<<endl;
            }
        }
        else{
            cout<<maxi+arr[n-1]<<endl;
        }

        // vector<pair<int,int>>v;
        // for(auto i : mp){
        //     v.push_back({i.second, i.first});
        // }

        // sort(v.begin(), v.end());


        // bool flage = false;

        // int ans = arr[n-1];

        // for(int i=n-2; i>=0; i--){
        //     if(arr[i] != ans){
        //         ans = ans + arr[i];
        //         flage = true;
        //         break;
        //     }
        // }

        // if(flage){
        //     cout<<ans<<endl;
        // }
        // else{
        //     cout<<ans+arr[n-2]<<endl;
        // }

        // if(v.size() == 1){
        //     cout<<v[0].second*2<<endl;
        // }
        // else{
        //     int ans = 0;
            
        //     for(int i=0; i<v.size()-1; i++){
        //         ans  = max(ans, v[i].second+v[v.size()-1].second);
        //     }

        //     cout<<ans<<endl;
        // }

    }


    return 0;
}