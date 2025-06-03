#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int mod = 998244353;

int getpow(int a, int b,map<int,long long int>&mp){
    if(a == 0) return 1;

    if(a == 1) return b;

    if(mp.count(a)){
        return mp[a];
    }

    if(a%2 == 0){
        return mp[a] = ((getpow(a/2, b,mp)%mod) * (getpow(a/2, b,mp)%mod))%mod;
    }
    else{
        return mp[a] = ((b * (getpow(a/2, b,mp)%mod))%mod * (getpow(a/2, b,mp)%mod))%mod;
    }
}

int findmax(int s, int e,int n, vector<int>&arr3, vector<int>&arr4){
    if(s == e){
        return (arr3[s] + arr4[n-s])%mod;
    }

    int mid = s + (e - s) / 2;

    int left = findmax(s, mid,n, arr3, arr4);
    int right = findmax(mid + 1, e,n, arr3, arr4);

    return max(left, right);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr1(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        vector<int>arr2(n);
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        map<int,long long int>mp;
        vector<int>arr3(n);
        for(int i=0; i<n; i++){
            arr3[i] = getpow(arr1[i],2,mp);;
            // cout<<arr3[i]<<" ";
        }
        // cout<<endl;

        vector<int>arr4(n);
        for(int i=0; i<n; i++){
            arr4[i] = getpow(arr2[i],2,mp);;
            // cout<<arr4[i]<<" ";
        }
        // cout<<endl;

        vector<int>ans(n);
        for(int i=0; i<n; i++){
            ans[i] = findmax(0,i,i,arr3,arr4);

            cout<<ans[i]<<" ";
        }
        cout<<endl;


    }

    return 0;
}