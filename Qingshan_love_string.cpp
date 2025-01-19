#include<iostream>
using namespace std;

bool check2(string t,int m){
    if(m==1){
        return 0;
    }

    for(int i=1;i<m;i++){
        if(t[i]==t[i-1]){
            return 1;
        }
    }
    return 0;

}

void check(string s,string t,int n, int m){
    if(n==1){
        cout<<"YES"<<endl;
        return ;
    }

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(s[i-1]==t[0]){
                cout<<"NO"<<endl;
                return ;
            }
            else if(s[i]==t[m-1]){
                cout<<"NO"<<endl;
                return ;
            }
            else if(check2(t,m)){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string s,t;
        cin>>s>>t;
        check(s,t,n,m);
    }

    return 0;
}