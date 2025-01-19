#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


bool customcomparision(pair<int,int>a, pair<int,int>b){
    
    if(a.first == b.first){
        return a.second > b.second;
    }
    else{
        return a.first < b.first;
    }
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>>v;

        int a,b;
        for(int i=0; i<n; i++){
            cin>>a>>b;

            v.push_back({a,b});
        }

        sort(v.begin(), v.end(), customcomparision);
        // reverse(v.begin(), v.end());

        bool notbreak[n+1];
        int counting[n+1];
        for(int i=0; i<=n; i++){
            notbreak[i] = true;
            counting[i] = 0;
        }

        // for(int i=0; i<n; i++){
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        long long int ans = 0;
        int count = 0;

        for(auto i : v){
            if(notbreak[i.first]){
                ans = ans + i.second;
                count++;
                counting[i.first]++

                notbreak[count] = false;
                int p = counting[count];
                counting[count] = 0;
                count = count - p;
            }
        }

        cout<<ans<<endl;
        
    }


    return 0;
}