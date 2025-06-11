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
        int n,m;
        cin>>n>>m;

        vector<int>arr(n);
        arr[0] = 1;
        for(int i = 1; i<n; i++){
            cin>>arr[i];
        }

        vector<int>brr(n);
        for(int i = 0; i<n; i++){
            cin>>brr[i];
        }

        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        int ans = 0;
        
        int i = 0;
        int j = 0;
        while(i<n && j < n) {
            if(arr[i] < brr[j]) {
               
                i++;
                j++;
            } else {
                ans++;
                j++;
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}