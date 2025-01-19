#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool ans = false;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == 'i' && s[i+1] == 't' ){
                ans = true;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}