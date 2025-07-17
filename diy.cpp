#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        map<int,int>mp;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            mp[a]++;
        }

        vector<int>arr;

        for(auto i : mp){
            for(int j=0; j<i.second; j++){
                arr.push_back(i.first);
            }
            if(i.second%2 == 1){
                arr.pop_back();
            }
        }

        sort(arr.begin(),arr.end());

        if(arr.size()<8){
            cout<<"NO"<<endl;
        }
        else{
            int x1,x2,x3,x4,y1,y2,y3,y4;

            x1 = arr[0];
            x2 = arr[1];
            y1 = arr[2];
            y3 = arr[3];
            y2 = arr[arr.size()-1];
            y4 = arr[arr.size()-2];
            x3 = arr[arr.size()-3];
            x4 = arr[arr.size()-4];

            cout<<"YES"<<endl;
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        }

    }

    return 0;
}