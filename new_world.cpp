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
        int n,k,p;
        cin>>n>>k>>p;


        if(1ll*n*p < abs(k)){
            cout<<-1<<endl;
           
        }
        else{
            int ans = (abs(k)+p-1)/p;
            cout<<ans<<endl;
        }




    }

    return 0;
}