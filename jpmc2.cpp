#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m;
    cin>>m;

    int p[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    int q[m];
    int maxi = 0;

    for(int i=0; i<m;i++){
        cin>>q[i];
        maxi = max(maxi, q[i]);
    }
    // map<int,int>mp;
    
    // for(int i=0; i<m; i++){
    //     int ans =0;

    //     if(mp.count(q[i])){
    //         cout<<mp[q[i]]<<endl;
    //         continue;
    //     }
    //     for(int j=0; j<n; j++){
    //         if(q[i] != p[j]){
    //             ans = ans + abs(q[i]-p[j]);
    //         }
    //     }
    //     mp[q[i]] = ans;
    //     cout<<ans<<endl;
    // }

    vector<int>ans;

    for(int i=0; i<n; i++){
    ans.push_back(abs(p[i]-maxi));
    }


    for(int i=0; i<m; i++){
        int k = 0;
        int t = maxi - q[i];

        if(q[i] != maxi){
            for(auto i: ans){
                k = k + abs(i-t);
            }

            cout<<k<<endl;
        }
        else{
            for(auto i: ans){
                k = k + abs(i-t);
            }
            cout<<k<<endl;
        }
        
    }

    

    


    return 0;
}

