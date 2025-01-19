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

        if(s=="cab"||s=="bca")
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }


    return 0;
}