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

        string ans = "";
        for(int i = 0; i<m; i++){
            ans = ans + "1";
        }

        for(int i = m; i<n; i++){
            ans = ans + "0";
        }

        cout<<ans<<endl;


    }

    return 0;
}