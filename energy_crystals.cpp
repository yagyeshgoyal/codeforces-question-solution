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
        
        int ans = 0;

        while(n!= 0){
            ans = ans + 2;
            n = n/2;
        }

        ans++;

        cout<<ans<<endl;

    }

    return 0;
}