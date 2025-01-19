#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;

        long long int arr[n*m];
        for(int i=0;i<n*m; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n*m);

        int mini = min(n,m);

        long long int ans1 = (m*n-mini)*(arr[m*n-1]-arr[0])*1ll + (mini-1)*1ll*(arr[m*n-1]-arr[1]);
        long long int ans2 = (m*n-mini)*(arr[m*n-1]-arr[0])*1ll + (mini-1)*1ll*(arr[m*n-2]-arr[0]);

        cout<<max(ans1,ans2)<<endl;
    }

    return 0;
}