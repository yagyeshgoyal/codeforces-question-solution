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
        int ans = -1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
            if(ans == -1 && abs(arr[i]-i-1) != 0){
                ans = abs(arr[i]-i-1);
            }
            else if(abs(arr[i]-i-1) != 0){
                ans = __gcd(ans,abs(arr[i]-i-1));
            }
        }

        cout<<ans<<endl;
        
    }


    return 0;
}