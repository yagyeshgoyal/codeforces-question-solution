#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr+1, arr+n);
        
        for(int i=1; i<n; i++){
            if(arr[i]>arr[0]){
                long long int k = arr[i]-arr[0];
                if(k%2 == 0){
                    arr[0] = arr[0] + (k/2);
                }
                else{
                    arr[0] = arr[0] + (k/2) + 1;
                }
            }

        }

        cout<<arr[0]<<endl;
    }


    return 0;
}