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

        sort(arr, arr+n);
        int count1 = 1;
        int count2 = 1;

        for(int i=1; i<n; i++){
            if(arr[i] == arr[0]){
                count1++;
            }
        }
        for(int i=n-2; i>=0; i--){
            if(arr[i] == arr[n-1]){
                count2++;
            }
        }

        if(count1 == n){
            cout<<1ll*count1*(n-1)<<endl;
        }
        else {
            cout<<1ll*count1*count2*2<<endl;
        }
    }


    return 0;
}