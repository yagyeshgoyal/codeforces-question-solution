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
        int n,a,b,x,y;
        cin>>n>>a>>b>>x>>y;
        int ans = 0;
        if(x<=y){
            if(n>=a){
                int temp = n - a + 1;
                int v = temp/x;
                if(temp%x>0){
                    v++;
                }
                ans = ans + v;
                n = n - (v*x);
            }

            if(n>=b){
                int temp = n - b + 1;
                int v = temp/y;
                if(temp%y>0){
                    v++;
                }
                ans = ans + v;
                n = n - (v*y);
            }
        }
        else{
            if(n>=b){
                int temp = n - b + 1;
                int v = temp/y;
                if(temp%y>0){
                    v++;
                }
                ans = ans + v;
                n = n - (v*y);
            }

            if(n>=a){
                int temp = n - a + 1;
                int v = temp/x;
                if(temp%x>0){
                    v++;
                }
                ans = ans + v;
                n = n - (v*x);
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}