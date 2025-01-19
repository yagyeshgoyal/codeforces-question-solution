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

        int arr[n][n];

        vector<int>arr2(2*n-1,0);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];

                int k = j-i+(n-1);
                arr2[k] = min(arr2[k],arr[i][j]);
            }
        }

        int ans = 0;
        for(int i=0; i<2*n - 1; i++){
            ans = ans + abs(arr2[i]);
            // cout<<arr2[i]<<" ";
        }
        cout<<ans<<endl;
    }


    return 0;
}