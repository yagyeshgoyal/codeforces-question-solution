#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int visited[n+1]  = {0};
        map<int,int>mps;
        map<int,vector<int>>mpv;
        int maxocc = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            visited[arr[i]] = 1;
            

        }

        int maxind = 0;
        
        

        set<int>s;
        vector<int>ans(n,-1);

        int p  = 1;

        for(int i=0; i<n; i++){
            if(s.find(arr[i]) == s.end()){
                s.insert(arr[i]);
                ans[i]= arr[i];
            }
            else{
                while(s.find(p) != s.end()){
                    p++;
                }
                ans[i] = p;
                s.insert(p);
            }
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
        
        
        


    }


    return 0;
}