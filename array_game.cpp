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

        vector<long long int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
            

        sort(arr.begin(),arr.end());

        if(k>=3){
            cout<<0<<endl;
        }
        else if(k==1){
            long long int ans = arr[0];
            for(int i = 1; i<n; i++){
                ans = min(ans, arr[i]-arr[i-1]);
            }

            cout<<ans<<endl;
        }
        else if(k==2){
            long long int ans = arr[0];
            for(int i = 0; i<n; i++){
                for(int j = i+1; j<n; j++){
                    long long int diff = abs(arr[i]-arr[j]);
                    ans = min(ans,diff);
                    int v = lower_bound(arr.begin(),arr.end(), diff) - arr.begin();
                    if(v == n) continue;
                    if(v==n-1){
                        ans = min(ans, abs(arr[v]-diff));
                        if(v-1>=0){
                            ans = min(ans, abs(arr[v-1]-diff));
                        }
                    }
                    if(v == 0){
                        ans = min(ans, abs(arr[v]-diff));
                        if(v+1<n){
                            ans = min(ans, abs(arr[v+1]-diff));
                        }
                    }
                    else{
                        ans = min(ans, abs(arr[v]-diff));
                        if(v-1>=0){
                        ans = min(ans, abs(arr[v-1]-diff));
                        }
                        if(v+1<n){
                            ans = min(ans, abs(arr[v+1]-diff));
                        }
                    }
                }
            }

            cout<<ans<<endl;

        }

    }

    return 0;
}