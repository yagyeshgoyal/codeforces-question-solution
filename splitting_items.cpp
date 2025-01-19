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
        reverse(arr,arr+n);

        int arr1[(n+1)/2];
        int arr2[n/2];
        int t = 0;
        int q = 0;
        long long int sum1= 0;
        long long int sum2 = 0;

        for(int i=0; i<n; i++){
            if(i%2 == 0){
                arr1[t] = arr[i];
                t++;
                sum1 = sum1 + arr[i];
            }
            else{
                arr2[q] = arr[i];
                q++;
                sum2 = sum2 + arr[i];
            }
        }

        long long int result = sum1 - sum2;
        // cout<<result<<endl;

        for(int i=0; i<n/2; i++){
            // cout<<arr1[i]<<" "<<arr2[i]<<endl;
            long long int p = min(arr1[i]-arr2[i],k);
            // cout<<p<<endl;
            result = result - p;
            k =  k-p;
        }

        cout<<result<<endl;
    }


    return 0;
}