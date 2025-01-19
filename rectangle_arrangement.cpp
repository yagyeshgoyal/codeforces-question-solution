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

        int arr1[n];
        int arr2[n];
        int a = 0;
        int b = 0;
        for(int i=0;i<n; i++){
            cin>>arr1[i]>>arr2[i];

            a = max(a, arr1[i]);
            b = max(b, arr2[i]);
        }

        vector<int>v(b,0);

        for(int i=0; i<n; i++){
            for(int j=0; j<arr2[i]; j++){
                if(v[j]<arr1[i]){
                    v[j] = arr1[i];
                }
            }
        }

        int ans = a + b;

        for(int i=b-1; i>=0; i--){
            if(i==b-1){
                ans = ans + v[i] + 1;
            }
            else{
                ans = ans + (v[i]-v[i+1]) + 1;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}