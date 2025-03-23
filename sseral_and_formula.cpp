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

        int c,d;
        c = max(a,b);
        d = min(a,b);

        string p = "";
        string q = "";

        while(c!=0){
            if(c&1 == 1){
                p = p + "1";
            }
            else{
                p = p + "0";
            }
            c = c/2;
        }
        
        while(d!=0){
            if(d&1 == 1){
                q = q + "1";
            }
            else{
                q = q + "0";
            }
            d = d/2;
        }

        while(q.size() < p.size()){
            q = q + "0";
        }
        
        reverse(p.begin(), p.end());
        reverse(q.begin(), q.end());

        string r = "";
        string s = "";

        for(int i=0; i<p.size(); i++){
            if(p[i] == q[i]){
                for(int j=i; j<p.size(); j++){
                    r.push_back(p[j]);
                    s.push_back(q[j]);
                }
                break;
            }
        }

        reverse(r.begin(), r.end());
        reverse(s.begin(), s.end());

        int l = 0;
        int k = 0;
        for(int i=0; i<r.size(); i++){
            if(r[i] == '1'){
                l = l + pow(2,i);
            }
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                k = k + pow(2,i);
            }
        }


        cout<<abs((l&k) - (l|k))<<endl;


    }

    return 0;
}