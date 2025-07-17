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
        int a,x,y;
        cin>>a>>x>>y;

        if(a>=min(x,y) && a <= max(x,y)){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}