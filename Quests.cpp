#include<iostream>
#include<vector>
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
        int arr2[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }

        vector<long long int>v(n,0);

        long long int maxi = 0;
        long long int currsum = 0;
        for(int i=0; i<min(n,k); i++){
            currsum += arr[i];
            maxi = max<long long int>(maxi,arr2[i]);

            v[i] = currsum + 1ll*(k-1-i)*maxi;
            // cout<<v[i]<<" ";
        }

        int ans = *max_element(v.begin(), v.end());
        cout<<ans<<endl;
    }


    return 0;
}