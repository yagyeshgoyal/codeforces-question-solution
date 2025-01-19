#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string st;
        cin>>st;

        string ans = "";
        map<int,int>mp;
        set<pair<int,int>>sk;

        for(int i=0; i<n; i++){
            mp[st[i]-'a']++;
        }

        for(auto i : mp){
            sk.insert({i.second,i.first});
        }

        int temp = n;
        while(temp>0){
            
            auto it = sk.rbegin();
            vector<pair<int,int>>v;
            while(it != sk.rend() && temp>0){
                int p = (*(it)).second;
                ans.push_back('a' + p);
                // cout<<p<<endl;

                mp[p]--;
                if(mp[p] == 0){
                    v.push_back(*it);
                }
                temp--;
                it++;
            }

            for(auto it : v){
                sk.erase(it);
            }

        }

        cout<<ans<<endl;
    }


    return 0;
}