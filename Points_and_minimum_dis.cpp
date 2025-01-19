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

        int arr[2*n];
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+(2*n));

        int sum = 0;
        for(int i=1; i<n; i++){
            sum = sum + abs(arr[i]-arr[i-1]) + abs(arr[(n*2)-i-1] - arr[(n*2)-i-1+1]);
        }

        cout<<sum<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" "<<arr[2*n-1-i]<<endl;
        }
    }


    return 0;
}