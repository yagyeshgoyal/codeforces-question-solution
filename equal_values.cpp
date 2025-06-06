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

        vector<int>arr;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        long long int ans = INT64_MAX;

        int i = 0;
        while(i<n){
            long long temp = 1ll*(i-0)*arr[i];
            int j = i;
            while(j<n && arr[j] == arr[i]){
                j++;
            }
            temp += 1ll*(n-j)*arr[i];
            // cout<<(n-j)*arr[i]<<endl;
            // cout<<temp<<" "<<i<<" "<<j<<endl;
            ans = min(ans, temp);

            i = j;
        }

        cout<<ans<<endl;

    }

    return 0;
}