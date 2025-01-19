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

        string ans =  "";
        for(int i=0; i<s.length()-1; i++){
            ans.push_back(s[i]);
        }
        cout<<ans<<endl;

    }


    return 0;
}