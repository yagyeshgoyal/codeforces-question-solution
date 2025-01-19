#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;

        // if(k==2){
        //     if(n%2 == 0){
        //         cout<<n/2<<endl;
        //     }
        //     else{
        //         cout<<1<<endl;
        //     }
        // }
        // else if(n/k > n%k){
        //     cout<<(n/k)-(n%k)<<endl;
        // }
        // else{
        //     cout<<n/k<<endl;
        // }

        // int p = n/k;
        // int s = n%k;

        // if(s%p == 0){
        //     cout<<p<<endl;
        // }
        // else{
        //     cout<<p-1<<endl;
        // }


        int ans = 1;

        for(int i=n/k; i<=n/k && k*i <= n; i--){
            if(n%i == 0){
                int p = n -  (k*i);
                if(p%i == 0){
                    ans = i;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}