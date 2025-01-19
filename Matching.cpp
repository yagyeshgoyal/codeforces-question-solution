#include<iostream>
using namespace std;

void check(string s){

    int n=s.length();

    if(s[0]=='0')
    {
        cout<<0<<endl;
        return ;
    }
    int count=1;
    bool flage = false;
    for(int i=0;i<n;i++){
        if(s[i]=='?'&&i==0)
        {
            count = count*9;
            flage=true;
        }
        else if(s[i]=='?')
        {
            count=count*10;
            flage=true;
        }
    }
    if(flage==true)
    cout<<count<<endl;
    else
    cout<<1<<endl;


}

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--){

        string s;
        getline(cin,s);

        check(s);

    }

    return 0;
}