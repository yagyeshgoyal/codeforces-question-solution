#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{

    string s;
    cin>>s;

    stack<char>p;
    p.push(s[0]);

    for(int i=1; i<s.length(); i++){
        if(s[i] == 'B'){
            // cout<<"k"<<" ";
            if(!p.empty() && (p.top() == 'A' || p.top() == 'B') ){
                p.pop();
            }
            else{
                p.push(s[i]);
            }
        }
        else{
            p.push(s[i]);
        }
    }


    cout<<p.size()<<endl;


    return 0;
}