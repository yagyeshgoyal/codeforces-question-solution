#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<int,int>mps;
        int ans = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            mps[a]++;
            ans = max(ans,mps[a]);
        }

        cout<<n-ans<<endl;


        
    }

    return 0;
}