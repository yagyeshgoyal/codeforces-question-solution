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
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<long long int>siffix(n,0);
        vector<long long int>prefix(n,0);

        int countsheep = 0;

        if(s[0] == '*'){
            // prefix[0] = 1;
            countsheep++;
        }

        for(int i = 1; i<n; i++){
            if(s[i] == '*'){
                prefix[i] = prefix[i-1];
                countsheep++;
            }
            else{
                prefix[i] = prefix[i-1] + countsheep;
            }
        }
        countsheep = 0;
        if(s[n-1] == '*'){
            // siffix[n-1] = 1;
            countsheep = 1;
        }

        for(int i = n-2; i>=0; i--){
            if(s[i] == '*'){
                siffix[i] = siffix[i+1];
                countsheep++;
            }
            else{
                siffix[i] = siffix[i+1] + countsheep;
            }
        }

        long long int ans = INT64_MAX;
        for(int i =0 ;i<n; i++){
            if(s[i] == '*'){
                ans = min<long long int>(ans, siffix[i]+prefix[i]);
            }
        }

        if(ans == INT64_MAX){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }


    }

    return 0;
}