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
    // int t;
    // cin>>t;
    // while(t--){
        string s,t;
        cin>>s>>t;

        map<char,string>mp;
        string temp = "";
        temp.push_back(t[t.length()-1]);

        for(int i=t.length()-2; i>=0; i--){
            temp = t[i] + temp;
            if(!mp.count(t[i])){
                mp[t[i]] = temp;
            }

        }

        string ans = "";
        bool flage = false;
        int size = s.length() + t.length() +1;
        string left = "";
        left.push_back(s[0]);
        for(int i=1; i<s.length(); i++){
            if(mp.count(s[i])){
                if(mp[s[i]].length() + left.length() < size){
                    ans = left + mp[s[i]];
                    size = ans.length();
                    flage = true;
                }
            }
            
            left.push_back(s[i]);
            
        }

        if(flage){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }



    // }

    return 0;
}