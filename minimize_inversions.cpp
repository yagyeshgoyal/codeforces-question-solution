#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr1[n];
        int arr2[n];

        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }

        vector<pair<int,pair<int,int>>>v;

        for(int i=0; i<n; i++){
            v.push_back(make_pair(arr1[i]+arr2[i],make_pair(arr2[i],arr1[i])));
        }

        sort(v.begin(),v.end());

        for(int i=0; i<n; i++){
            arr1[i] = v[i].second.second;
            arr2[i] = v[i].second.first;
        }

        for(int i=0; i<n; i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<n; i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;


    }


    return 0;
}