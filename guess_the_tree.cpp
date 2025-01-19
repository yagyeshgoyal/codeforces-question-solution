#include<iostream>
#include<bits/stdc++.h>
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

        stack<pair<int,int>>s;
        map<pair<int,int>,bool>mp2;
        unordered_map<int,bool>mp;
        for(int i=2; i<=n; i++){
            s.push({1,i});
        }

        string result = "!";
        while(!s.empty()){
            auto top = s.top();
            s.pop();
            int a = top.first;
            int b = top.second;

            if((!mp.count(a) || !mp.count(b)) && !(mp2.count(top))){
                cout.flush();
                cout<<"? "+ to_string(a) + " " + to_string(b) <<endl;
                cout.flush();
                int k ;
                cin>>k;
                mp2[top] = true;

                if(k == a){
                    // mp[a] = true;
                    mp[b] = true;
                    result = result + " " + to_string(a) + " " + to_string(b);
                }
                else{
                    s.push({a,k});
                    s.push({k,b});
                }
            }
        }
        // result = result + " " + "3" + " " + "4";
        cout.flush();
        cout<<result<<endl;
        cout.flush();
    }


    return 0;
}