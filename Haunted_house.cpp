#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
using namespace std;
int send(string &s,int n){
    int num=0;
    for(int i=n-1;i>=0;i--){
        num=num+(s[i]-'0')*pow(2,n-1-i);
    }
    return num;
}
void check(string &s,int n){
    if(n==1){
        
        if((s[0]-'0')%2==0){
            cout<<0<<endl;
            return ;
        }
        else {
            cout<<-1<<endl;
            return ;
        }
    }

    int num=send(s,n);
    
}

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

        check(s,n);

    }

    return 0;
}