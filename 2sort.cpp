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

        vector<int> arr;
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        

        int i = 0;
        int j = 0;
        int ans = 0;
        while(i<n && j<n){
            // cout<<i<<" "<<j<<" "<<ans<<endl;
            if(j-i+1 == k+1){
                ans++;
                i++;
                
            }
            else if(j-i+1 < k+1 && j+1<n && 1ll*arr[j+1]*2 > arr[j]){
                j++;
            }
            else{
                i = j+1;
                j++;
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}