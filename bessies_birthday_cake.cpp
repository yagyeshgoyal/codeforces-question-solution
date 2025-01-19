#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k,y;
        cin>>n>>k>>y;

        int arr[k];
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }

        sort(arr,arr+k);

        int ans = k-2;
        for(int i=1; i<k; i++){
            if((arr[i]-2)%n == arr[i-1]){
                
                ans++;
            }
        }

        if((arr[k-1]+2)%n == arr[0]){
            ans++;
        }

        cout<<ans<<endl;
    }


    return 0;
}