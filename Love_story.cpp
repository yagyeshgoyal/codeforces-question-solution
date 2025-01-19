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
        
        string p="codeforces";

        int count=0;
        for(int i=0;i<10;i++){
            if(s[i]!=p[i])
            count++;
        }

        cout<<count<<endl;
    }


    return 0;
}