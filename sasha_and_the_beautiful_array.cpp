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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        int ans = 0;
        for(int i=1; i<n; i++){
            ans = ans + (arr[i] - arr[i-1]);
        }

        cout<<ans<<endl;
    }


    return 0;
}