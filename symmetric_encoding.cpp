#include<iostream>
#include<set>
#include<vector>
#include<map>
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
        set<char>yt;

        for(int i=0; i<n; i++){
            yt.insert(s[i]);
        }

        vector<char>vy;

        for(auto i : yt){
            vy.push_back(i);
        }

        map<char,char>str;

        for(int i=0; i<vy.size(); i++){
            str[vy[i]] = vy[vy.size()-i-1];
        }

        for(int i=0; i<n; i++){
            s[i] = str[s[i]];
        }

        cout<<s<<endl;

    }


    return 0;
}