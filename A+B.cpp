#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    cin.ignore();
    while(t--){
        string s;
        cin>>s;

        cout<<(s[0]-'0')+(s[2]-'0')<<endl;
    }


    return 0;
}