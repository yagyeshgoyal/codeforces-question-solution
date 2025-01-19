#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        int canAddCoin = 0;

        for(int i=n-1; i>=0; i--){
            if(canAddCoin + arr[i] <= k){
                canAddCoin += arr[i];
            }
            else{
                break;
            }
        }

        cout<<k-canAddCoin<<endl;
    }


    return 0;
}