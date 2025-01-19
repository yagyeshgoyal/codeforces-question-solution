#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
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

        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        if(s == rev_s){
            cout<<s<<endl;
        }
        else if(s<rev_s){
            if(n%2 == 0){
                cout<<s<<endl;
            }
            else{
                
                cout<<s<<rev_s<<endl;
            }
            
        }
        else{
            if(n%2 == 0){
                // s = rev_s + s;
                cout<<rev_s<<s<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }
    }


    return 0;
}