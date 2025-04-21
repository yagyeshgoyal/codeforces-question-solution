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
        int a,b;
        cin>>a>>b;
        int maxi, p;

        if(a == b){
            cout<<-1<<endl;
            goto end;
        }

         maxi = max(a,b);
         p = log2(maxi);

        if(1<<p < maxi){
            p++;
        }

        cout<<((1<<p) - maxi)<<endl;

        end:;;

    }

    return 0;
}
