#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        int i;
        for( i=1; i<s.length(); i++){
            if(s[i] != s[i-1]){
                cout<<"YES"<<endl;
                swap(s[i],s[i-1]);
                cout<<s<<endl;
                break;
            }
        }

        if(i == s.length()){
            cout<<"NO"<<endl;
        }

    }

    return 0;
}