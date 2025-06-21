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
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        vector<int>v;
        for(int i=0; i<n-k; i++){
            v.push_back(arr[i]);
        }
        int l = v[(v.size()-1)/2];

        vector<int>v1;
        for(int i=k; i<n;i++){
            v1.push_back(arr[i]);
        }
        int r = v1[v1.size()/2];

        cout<<r-l+1<<endl;

    }

    return 0;
}