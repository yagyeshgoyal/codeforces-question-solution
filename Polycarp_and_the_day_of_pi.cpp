#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string  s;
        getline(cin,s);
        string s1="314159265358979323846264338327";
        int i=0;
        while(i<s.length() ){
            if(s[i]!=s1[i])
            break;
            else
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}