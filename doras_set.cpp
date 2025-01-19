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

        if(a%2 == 0){
            a++;
        }

        if(b%2 == 0){
            b--;
        }

    if(a<=b){
        int n = b-a+1;
        n = n-(n/2);
        cout<<n/2<<endl;
    }
    else{
        cout<<0<<endl;
    }


    }


    return 0;
}