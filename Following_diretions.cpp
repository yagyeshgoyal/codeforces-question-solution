#include<iostream>
using namespace std;

void check(string s,int n){

    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U')
        y++;
        else if(s[i]=='D')
        y--;
        if(s[i]=='L')
        x--;
        if(s[i]=='R')
        x++;
        if(y==1 && x==1){
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;return;

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
        getline(cin,s);
        
        check(s,n);
    }


    return 0;
}