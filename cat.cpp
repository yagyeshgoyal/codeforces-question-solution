#include<iostream>
using namespace std;

void check(string s, int n){
    if((s[0]!='m' && s[0]!='M') || (s[n-1]!='w'&& s[n-1]!='W'))
    {
        cout<<"NO"<<endl;
        return ;
    }


    for(int i=1;i<n;i++){
            if(s[i]=='m'|| s[i]=='M'|| s[i]=='e'|| s[i]=='E'|| s[i]=='o'|| s[i]=='O'|| s[i]=='w'|| s[i]=='W'){
                if((s[i]=='m'|| s[i]=='M') && (s[i-1]=='m' || s[i-1]=='M'))
                {}
                else if((s[i]=='e'|| s[i]=='E') && (s[i-1]=='e' || s[i-1]=='E' || s[i-1]=='m' || s[i-1]=='M'))
                {}
                else if((s[i]=='o'|| s[i]=='O') && (s[i-1]=='o' || s[i-1]=='O' || s[i-1]=='e' || s[i-1]=='E'))
                {}
                else if((s[i]=='w'|| s[i]=='W') && (s[i-1]=='w' || s[i-1]=='W' || s[i-1]=='o' || s[i-1]=='O'))
                {}
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
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