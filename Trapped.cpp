#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool  findTrap(int i, int j, int n, int m ,string arr[],
vector<vector<bool>>&visited, vector<vector<char>>&istrap){

    if(i==-1 ||j==-1 || i==n || j==m){
        return false;
    }

    if(visited[i][j]){
        if(istrap[i][j] == 'o' || istrap[i][j] == 't'){
            istrap[i][j] = 't';
            return true;
        }

        return false;
    }

    visited[i][j] = true;

    if(arr[i][j] == 'U'){
        bool ans = findTrap(i-1,j,n,m,arr,visited,istrap);
        if(ans){
            istrap[i][j]  = 't';
            return true;
        }
        istrap[i][j] = 'n';
        return false;
    }


    if(arr[i][j] == 'L'){
        bool ans = findTrap(i,j-1,n,m,arr,visited,istrap);
        if(ans){
            istrap[i][j]  = 't';
            return true;
        }
        istrap[i][j] = 'n';
        return false;
    }

    if(arr[i][j] == 'R'){
        bool ans = findTrap(i,j+1,n,m,arr,visited,istrap);
        if(ans){
            istrap[i][j]  = 't';
            return true;
        }
        istrap[i][j] = 'n';
        return false;
    }


    if(arr[i][j] == 'D'){
        bool ans = findTrap(i+1,j,n,m,arr,visited,istrap);
        if(ans){
            istrap[i][j]  = 't';
            return true;
        }
        istrap[i][j] = 'n';
        return false;
    }


    bool ans = findTrap(i-1,j,n,m,arr,visited,istrap);
    if(ans){
        istrap[i][j] = 't';
        return true;
    }

    ans = findTrap(i+1,j,n,m,arr,visited,istrap);
    if(ans){
        istrap[i][j] = 't';
        return true;
    }
    ans = findTrap(i,j+1,n,m,arr,visited,istrap);
    if(ans){
        istrap[i][j] = 't';
        return true;
    }
    ans = findTrap(i,j-1,n,m,arr,visited,istrap);
    if(ans){
        istrap[i][j] = 't';
        return true;
    }

    istrap[i][j] = 'n';
    return false;


    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<vector<bool>>visited(n,vector<bool>(m,false));

        vector<vector<char>>istrap(n,vector<char>(m,'o'));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j] == false){
                    // visited[i][j] = true;

                    bool ans = findTrap(i,j,n,m,arr,visited,istrap);

                    // istrap[i][j] = 't';
                }
            }
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0 ; j<m; j++){
                if(istrap[i][j] == 't'){
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
        
    }


    return 0;
}