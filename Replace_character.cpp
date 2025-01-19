#include<iostream>
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

        map<char,vector<int>>charPosition;
        vector<int>charCount(26,0);
        
        int maxcount = 0;
        int maxcountchar = 0;
        int mincount = 0;

        for(int i=0; i<n; i++){
            charPosition[s[i]].push_back(i);
            charCount[s[i]-'a']++;

            maxcount = max(maxcount , charCount[s[i]-'a']);

            if(maxcount == charCount[s[i]-'a']){
                maxcountchar = s[i]-'a';
            }
            
            // if(mincount == 0){
            //     mincount = charCount[s[i]-'a'];
            // }
            // else{

            // }
        }

        
        mincount = maxcount;
        for(int i=0; i<26; i++){
            if(charCount[i]!=0){
                mincount = min(mincount,charCount[i]);
            }
        }

        int mincountchar = -1;
        for(int i=0; i<26; i++){
            if(charCount[i] == mincount && i != maxcountchar){
                mincountchar = i;
                break;
            }
        }

        if(mincountchar == -1){
            mincountchar = maxcountchar;
        }

        // cout<<(char)(mincountchar + 'a')<<endl;
        int pos = charPosition[(char)(mincountchar + 'a')][0];
        // cout<<pos<<endl;
        // cout<<"ks"<<endl;
        s[pos] = maxcountchar + 'a';

        cout<<s<<endl;

    

    }


    return 0;
}