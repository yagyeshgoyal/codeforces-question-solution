#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<map>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<int,int>mp;
    set<int>s;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a==1){
            s.insert(pow(2,b));
            mp[pow(2,b)]++;
        }
        else{
            auto it = s.rbegin();
            for( ; it != s.rend(); ++it){
                int p = b/(*it);
                if(p<=mp[*it]){
                    b = b - p*(*it);
                }
                else{
                    b = b - mp[*it]*(*it);
                }
            }

            if(b == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }


    return 0;
}