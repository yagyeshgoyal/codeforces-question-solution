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
        int n,m;
        cin>>n>>m;

        int f1 = 1;
        int f2 = 2;

        for(int i = 3; i <= n+1; i++){
            int f3 = (f1 + f2);
            f1 = f2;
            f2 = f3;
        }

        // cout<<f1<<" "<<f2<<endl;

        string ans = "";
        while(m--){
            int a,b,c;
            cin>>a>>b>>c;

            if((a>=f2 || b>=f2 ||c>=f2) && (a>=f1 && b>=f1 && c>=f1)){
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}