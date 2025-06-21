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
        int n,s;
        cin>>n>>s;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        int ans1 = 0;

        if(arr[0]<s){
            ans1 = s - arr[0];
        }

        int ans2 = 0;
        if(arr[n-1]>s){
            ans2 = arr[n-1] - s;
        }

        int ans = 0;
        if(ans1<= ans2){
            ans = ans1*2 + ans2;
        }
        else{
            ans = ans1 + ans2*2;
        }

        cout<<ans<<endl;


    }

    return 0;
}