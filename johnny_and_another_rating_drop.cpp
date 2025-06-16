#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        long long int num = n;
        int bits = 0;

        while(num>0){
            bits++;
            num = num/2;
        }
        long long int ans = 0;
        long long int v= 1;
        n++;
        for(int i = 0; i<bits; i++){
            long long int  temp = n/v;
            if(n%v > 0){
                temp++;
            }

            ans = ans + temp - 1;
            v = 1ll*v*2;
        }
        cout<<ans<<endl;

    }

    return 0;
}