#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string t;
        cin>>t;

        string ans = "";

        map<char,bool>mp;

        // int i=0;
        // int j=0;
        // char last_ch = '1';
        // while(i<s.length()){
        //     if(s[i] != t[j]){
        //         if(mp[s[i]] && last_ch != s[i]){
        //             break;
        //         }
        //         else{
        //             i++;
        //         }
        //     }
        //     else if(s[i] == t[j]){
        //         ans.push_back(s[i]);
        //         last_ch = s[i];
        //         mp[s[i]]  = true;
        //         i++;
        //         j++;
        //     }
        // }

        // cout<<ans<<endl;
        // if(i==s.length() && j==t.length() && ans == t){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        int i=s.length()-1;
        int j=t.length()-1;

        while(i>=0){
            if(s[i] != t[j]){
                if(mp[s[i]] ){
                    break;
                }
                else{
                    i--;
                }
            }
            else if(s[i] == t[j]){
                ans.push_back(s[i]);
                // last_ch = s[i];
                mp[s[i]]  = true;
                i--;
                j--;
            }
        }
        
        reverse(ans.begin(), ans.end());
        // cout<<ans<<endl;
        // if(i==s.length() && j==t.length() && ans == t){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

    }

    return 0;
}