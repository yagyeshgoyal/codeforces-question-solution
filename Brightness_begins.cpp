#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int k;
        cin>>k;

        int p = log2l(k);

        if(powl(2,p+1)-1 == k){
            cout<<k+p+1<<endl;
        }
        else{
            cout<<k+p<<endl;
        }
    }


    return 0;
}