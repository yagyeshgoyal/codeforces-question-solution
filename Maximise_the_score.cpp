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
        for(int i=(2*n)-2; i>=0; i= i-2){
            sum = sum + arr[i];
        }

        cout<<sum<<endl;


    }


    return 0;
}