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
        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr,arr+n);

        arr[0]++;

        int p=1;
        for(int i=0;i<n;i++)
        p=p*arr[i];

        cout<<p<<endl;
    }

    return 0;
}