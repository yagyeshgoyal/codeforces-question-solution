#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

 int t;
 cin>>t;
 while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];

    cin>>arr[0];
    int count=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        count=max(count,arr[i]-arr[i-1]);
    }

    count=max(count,(x-arr[n-1])*2);
    cout<<count<<endl;
 }

    return 0;
}