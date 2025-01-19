#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        // if(n%2 == 1){
        //     cout<<"NO"<<endl;
        // }
        // else{
            if(s[0] == s[n-1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        // }
    }

    return 0;
}