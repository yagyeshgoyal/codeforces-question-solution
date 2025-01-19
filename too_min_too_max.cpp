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

        int i = arr[n-1];
        int j = arr[0];
        int k = arr[n-2];
        int l = arr[1];

        cout<<abs(i-j) + abs(j-k) + abs(k-l) + abs(l-i)<<endl;

    }


    return 0;
}