#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;

        if(b%a == 0){
            cout<<b*(b/a)*1ll<<endl;
        }
        else{
            cout<<a*(b/__gcd(a,b))*1ll<<endl;
        }
    }


    return 0;
}