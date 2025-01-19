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

        // int count = 0;
        // for(int i=0; i<=n; i++){
        //     if(sqrtl((1ll*n*n)+ (1ll*i*i)) < n+1){
        //         count++;
        //     }
        //     else{
        //         break;
        //     }
        // }

        // cout<<1ll*count*8<<endl;
        long long int ans = 0;
        int dis = n;
         for (int i = 0; i <= n; i++)
        {
            while (1ll*i*i + 1ll*dis*dis >= 1ll*(n + 1) * (n + 1))
            {
                dis--;
            }
            long long int  dist = dis;
            while (1ll*i*i + 1ll*dist*dist >= 1ll*n*n && dist > 0)
            {
                dist--;
                ans++;
            }
            // cout<<i<<" "<<dis<<" "<<dist<<endl;
        }
        cout << 1ll*ans*4 << endl;
    }


    return 0;
}