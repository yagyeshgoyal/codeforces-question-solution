#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
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

        // int mid = ceil(n/2);

        // cout<<mid<<endl;

        int mid = n/2;

        if(n%2 != 0){
            mid++;
        }

        sort(arr, arr+n);
        int ans = 0;
        for(int i = mid-1; i<n; i++){
            if(arr[i] == arr[mid-1]){
                ans++;
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}