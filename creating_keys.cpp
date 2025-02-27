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
        long long int n,x;
        cin>>n>>x;
        long long int rx = x;


        string s = "";

        while(x != 0){
            if(x& 1){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
            x = x/2;
        }

        x = rx;

        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                count++;
            }
            else{
                break;
            }
        }

        long long int  k = (1<<count);
        // cout<<s<<" "<<k<<endl;
        if(x&1){
            if(k<n){
                for(int i=0; i<k; i++){
                    cout<<i<<" ";
                }
                for(int i=k; i<n; i++){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
            else{
                int ors = 0;
                for(int i=0; i<n-1; i++){
                    cout<<i<<" ";
                    
                }
                int p = 0;
                for(int i=0; i<100000; i++){
                     p = i;
                }
                for(int i=0; i<n; i++){
                    
                    ors = ors | i;
                }

                if(ors  == x){
                    cout<<n-1<<endl;;
                }
                else{
                    cout<<x<<endl;;
                }
            }
        }
        else{
            cout<<x<<" ";
            for(int i=1; i<n; i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }



    }

    return 0;
}