#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool cmp(pair<long int,int>a , pair<long int,int>b){

    if(a.first == b.first){
        return a.second >= b.second;
    }
    else{
        return a.first < b.first;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        long int arr[n];
        // map<int,int>mp;
        vector<pair<long int,int>>v;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            v.push_back({arr[i],i});
        }

        sort(v.begin(),v.end(),cmp);

        // for(auto i : v){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        int day = k/m;
        int p = k%m;
        if(p==0){
            p = m;
        }
        if(k%m != 0){
            day++;
        }

        long int maxi  = 0;
        vector<int>v2;
        for(int i=0; i<day; i++){
            v2.push_back(v[i].second);
            maxi = max(maxi,v[i].first);
        }

        long long int ans = 0;
        int count = 0;
        sort(v2.begin(),v2.end());
        
        for(auto i: v2){
            // cout<<i<<" "<<p<<" "<<m<<endl;
            if(arr[i] == maxi){
                ans = ans + 1ll*arr[i]*p*1ll + 1ll*count*p*1ll;
                // cout<<1ll*arr[i]*p*1ll<<endl;
                count = count + p;
                maxi = -1000;
            }
            else{
                ans = ans + 1ll*arr[i]*m*1ll + 1ll*count*m*1ll;
                count = count + m;
            }
            // cout<<ans<<endl;
        }

        cout<<ans<<endl;
    }


    return 0;
}