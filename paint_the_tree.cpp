#include<iostream>
#include<map>
#include<vector>
using namespace std;

pair<bool,int> findDistance(int &a, int &b, map<int,vector<int>>&mp, vector<bool>&visited){

    pair<bool,int>ans;

    for(auto i : mp[a]){
        if(i==b){
            ans.first = true;
            ans.second = 1;
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a,b;
        cin>>a>>b;

        map<int,vector<int>>mp;

        for(int i=0; i<n-1; i++){
            int x,y;
            cin>>x>>y;

            mp[x].push_back(y);
            mp[y].push_back(x);
        }

        vector<bool>visited(n+1,false);
        
        pair<bool,int>dis = findDistance(a,b,mp,visited);


    }


    return 0;
}