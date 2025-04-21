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
            mp[arr[i]] = i+1;
        }

        int q = n;
        vector<int>ans;
        int sum = 0;
        while(q--){
            int x;
            cin>>x;

            if(mp.count(arr[x-1])){
                int a = arr[x-1];

                while(mp.count(a)){
                    sum ++;
                    int b = a;
                    a = mp[a];
                    mp.erase(b);
                }
                ans.push_back(sum);
            }
            else{
                ans.push_back(sum);
            }

        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}