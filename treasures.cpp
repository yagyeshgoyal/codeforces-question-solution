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
        
        cin.ignore();

        string s;
        cin>>s;

        int count = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '-'){
                count++;
            }
        }

        if(count <=1){
            cout<<0<<endl;
        }
        else{
            int count2 = n-count;

            int left = count/2;
            long long int total = 1ll*left*(count-left);

            long long int ans = total*count2;

            cout<<ans<<endl;
        }

    }

    return 0;
}