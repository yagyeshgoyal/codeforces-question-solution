#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        long long int p = __gcd(a,b);
        long long int ans = (1ll*a*b)/p;

        cout<<ans<<endl;
    }


    return 0;
}