#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

long long int solve(long long int arr[], int n){
    if(n==1){
        return 0;
    }
    long long int ans = 0;
    long long int result = 0;

    for(int i=1; i<=n/2; i++){
        long long int maxy = abs(arr[i]);
        long long int miny = abs(arr[i]);
        if(n%i==0){
            for(int j=2*i; j<=n; j=j+i){
                maxy = max<long long int>(maxy, arr[j]-arr[j-i]);
                miny = min<long long int>(miny, arr[j]-arr[j-i]);
            }
        }
        // cout<<ans<<endl;
        // cout<<maxy<<" "<<miny<<endl;
        result = max(result,maxy-miny);
    }

    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long int arr[n+1];
        arr[0] =0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }

        for(int i=1; i<=n; i++){
            arr[i] = arr[i] + arr[i-1];
        }

        long long int ans = solve(arr,n);
        cout<<ans<<endl;
    }


    return 0;
}