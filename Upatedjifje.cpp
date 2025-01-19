#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        set<int>st;

        for(int i=0; i<m; i++){
            int k;
            cin>>k;
            st.insert(k);
        }

        string s2;
        cin>>s2;

        sort(s2.begin(), s2.end());

        int k=0;

        for(auto i : st){
            s[i-1] = s2[k];
            k++;
        }

        cout<<s<<endl;

    }


    return 0;
}