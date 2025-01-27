#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

struct ans{
    int a;
    int b;
    bool c;
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr;
        arr.push_back(0);
        for(int i=0; i<n; i++){
            int a ;
            cin>>a;
            arr.push_back(a);
        }

        map<int,vector<int>>adj;
        for(int i=0; i<n-1; i++){
            int l,r;
            cin>>l>>r;
            adj[l].push_back(r);
            adj[r].push_back(l);
        }

        vector<bool>visited(n,false);

        int maxi = max_element(arr.begin()+1, arr.end()) - arr.begin();
        maxi = arr[maxi];

        int secondmaxi = -1;
        for(int i=1; i<=n; i++){
            if(arr[i] != maxi){
                secondmaxi = max(secondmaxi,arr[i]);
            }
        }

        ans a = findans()

    }

    return 0;
}