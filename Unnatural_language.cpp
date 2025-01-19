#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        string ans = "";
        ans.push_back(s[0]);
        ans.push_back(s[1]);

        for(int i=2; i<n; i++){
            if(i==n-1){
                ans.push_back(s[i]);
            }
            else if((s[i]=='b' || s[i]=='c' || s[i]=='d' ) 
                && (s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d' )){
                    ans.push_back(s[i]);
                    ans.push_back('.');
                    ans.push_back(s[i+1]);
                    ans.push_back(s[i+2]);
                    i= i+2;
            }
            else{
                ans.push_back('.');
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                i= i+1;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}