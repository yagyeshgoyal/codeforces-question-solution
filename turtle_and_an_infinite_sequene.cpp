#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// long long int check(int n, int m, map<pair<long long int ,long long int>,long long int>&mp){
//     if(m<=0){
//         return max(n,0);
//     }
//     if(n<0) return 0;

//     if(n==0){
//         return 1;
//     }

//     if(mp.count({n,m})){
//         return mp[{n,m}];
//     }

//     mp[{n,m}] =  check(n-1,m-1,mp) | check(n,m-1,mp) | check(n+1,m-1,mp);

//     return mp[{n,m}];
// }

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        // map<pair<long long int,long long int>,long long int>mp;
        // long long int ans = n;
        // ans = (n+m)|(n-m);
        // if(m != 0)
        // ans = check(n-1,m-1,mp) | check(n,m-1,mp) | check(n+1,m-1,mp);

        int a = max(0,n-m);
        int b = n+m;

        string s1 = "";
        while(a!=0){
            s1 = char(a%2 + '0') + s1;
            a = a/2;
        }

        string s2 = "";
        while(b!=0){
            s2 = char(b%2 + '0') + s2;
            b = b/2;
        }

        a = max(0,n-m);
        b = n+m;

        if(s1.length()<s2.length()){
            int k = s2.length()-s1.length();
            while(k--){
                s1 = '0' + s1;
            }

        }
        else if(s1.size()>s2.size()){
            int k = s1.length()-s2.length();
            while(k--){
                s2 = '0' + s2;
            }
        }

        // cout<<s1<<" "<<s2<<endl;

        string ans = "";
        for(int i=0; i<s1.length(); i++){
            if(s1[i] == '1' || s2[i] == '1'){
                ans.push_back('1');
            }
            else if((a/int(pow(2,s1.length()-i))) != (b/int(pow(2,s1.length()-i)))){
                // cout<<"k"<<" "<<(a/pow(2,s1.length()-i))<<" "<<(b/pow(2,s1.length()-i))<<endl;
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
        }
        
        int result = 0;
        for(int i=0; i<ans.length(); i++){
            result = result + (ans[i]-'0')*pow(2,ans.length()-1-i);
        }

        cout<<result<<endl;
    }

    return 0;
}