#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

void solve(){
    int n, k, x;
    cin>>n>>k>>x;

    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    sort(arr, arr+n);
    int ans = INT_MIN;
    int a = 0,b = 0;

    for(int i=0; i<n-x; i++){
        a = a + arr[i];

    }
    for(int i=n-x; i<n; i++){
        b = b + arr[i];
    }

    int count = 0;
    int p = n-1;
    ans = max(ans,a-b);
    for(int i=n-x-1; i>=0; i--){
        if(count<k){
            count++;
            a = a - arr[i];
            b = b - arr[p] + arr[i];
            ans = max(ans, a-b);
            p--;
        }
        else{
            break;
        }
    }

    while(count<k && p>=0){
        b = b-arr[p];
        ans = max(ans, 0-b);
        p--;
        count++;
    }

    cout<<ans<<endl;
    return ;

    
    
    

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}