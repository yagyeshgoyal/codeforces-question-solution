#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        
       int i;
        for( i=1;i<s.length();i++){

            if(s[i]!=s[i-1])
            break;

        }
        if(i==s.length())
        cout<<-1<<endl;
        else
        cout<<s.length()-1<<endl;

        
    }


    return 0;
}