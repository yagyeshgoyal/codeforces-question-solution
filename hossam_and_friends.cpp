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
        long long int n,m;
        cin>>n>>m;

        vector<long long int>arr(n+1,n);

        for(int i = 0; i<m; i++){
            long long int a,b;
            cin>>a>>b;

            if(a > b) {
                swap(a, b);
            }

            arr[a] = min(arr[a], b-1);
        }

        for(int i = n-1; i>0; i--){
            arr[i] = min(arr[i], arr[i+1]);
        }


        long long int ans = 0;
        for(int i = 0; i<=n; i++){
            ans = ans + (arr[i]-i);
        }

        cout<<ans<<endl;

       
        


    }

    return 0;
}