#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        string s,t;
        cin>>s>>t;

        int n = s.size();
        int m = t.size();

        int ans = n + m;
        for (int i = 0; i < m; ++i) {
            int j = i;
            for (auto c : s) {
                if (j < m && c == t[j]) ++j;
            }
            ans = min(ans, n + m - (j - i));
        }

        cout<<ans<<endl;
        // vector<int>v(s.size()+1,0);
        

        // for(int i=0; i<t.size(); i++){
        //     vector<int>curr(s.size()+1,0);
        //     for(int j=0; j<s.size(); j++){
        //         if(s[j] == t[i]){
        //             curr[j+1] = max(curr[j],v[j]+1);
        //         }
        //         else{
        //             curr[j+1] = max(curr[j],v[j+1]);
        //         }
        //     }

        //     v = curr;
        // }

        // int p = v[s.size()];

        // cout<<s.size() + (t.size()-p)<<endl;
    }


    return 0;
}