#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

bool findans(int i, int m, int n, vector<int>&ans, unordered_map<int,bool>&mp){
    if(m == 0 || i>n){
        return false;
    }

    if(i == n){
        return true;
    }

    if(mp.count(i)){
        return false;
    }

    ans.push_back(2);
    bool first = findans(2*i+ 1,m-1,n, ans,mp);

    if(first == true){
        return true;
    }
    // mp[2*i + 1] = false;
    ans.pop_back();

    ans.push_back(1);
    bool second  = findans(2*i - 1, m-1, n, ans,mp);

    if(second == true){
        return true;
    }

    mp[i] = false;
    ans.pop_back();
    return false;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        if(n%2 == 0){
            cout<<-1<<endl;
        }
        else{
            // unordered_map<int,bool>mp;
            vector<int>ans;
            // bool a = findans(1,40,n,ans,mp);

            while(n != 1){
                n = n/2;
                if(n%2 == 0){
                    ans.push_back(1);
                    n++;
                }
                else{
                    ans.push_back(2);
                }
            }

            if(ans.size()>40){
                cout<<-1<<endl;
            }
            else{
                
                cout<<ans.size()<<endl;
                reverse(ans.begin(), ans.end());
                for(auto i : ans){
                    cout<<i<<" ";
                }
                cout<<endl ;
            }
        }


    }

    


    return 0;
}