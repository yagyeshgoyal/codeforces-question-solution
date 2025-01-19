#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long int findans(int k , int r){
    if(r==0){
        return 1;
    }
    if(r==1){
        return k;
    }

    if(r%2 == 0){
        return (1ll*(findans(k,r/2))*(findans(k,r/2)))%mod;
    }
    else{
        return (1ll*((1ll*(findans(k,r/2))*(findans(k,r/2)))% mod)*k)%mod;
    }
}

int main()
{

    int t;
    cin>>t;


    while(t--){
        int l,r,k;
        cin>>l>>r>>k;

        int count ;
        long long int ans ;
        if(k>=10){
            cout<<0<<endl;
            goto end;
        }

        count = 1;
        for(int i=1; i<10; i++){
            if(k*i < 10){
                count++;
            }
            else{
                break;
            }
        }

        ans = findans(count,r);
        ans = ans - findans(count,l);
        ans = (ans +mod)%mod;

        cout<<ans<<endl;

        end:;
    }

    return 0;
}