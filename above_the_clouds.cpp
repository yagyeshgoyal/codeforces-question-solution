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

        map<char,int>mp;

        mp[s[0]]++;
        mp[s[n-1]]++;

        bool flage = false;
        for(int i = 1; i<n-1; i++){
            if(mp[s[i]]>0){
                flage = true;
                break;
            }
            else{
                mp[s[i]]++;
            }
        }

        if(flage){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}