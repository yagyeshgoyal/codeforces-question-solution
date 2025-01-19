#include<iostream>
#include<set>
#include<vector>
using namespace std;

void find_player(int &n, int &m, int k, int dis[], char dir[], int index, set<int>&ans,
vector<vector<int>>&dp){

    if(index == m){
        ans.insert(k);
        return ;
    }
    if(index>m){
        return ;
    }

    if(dp[k][index] != 0){
        return ;
    }

    if(dir[index] == '1'){
        int pos = n+k - (dis[index] % n);
        if(pos>n){
            pos = pos - n;
        }
        find_player(n,m,pos,dis,dir,index+1,ans,dp);
    }
    else if(dir[index] == '0'){
        int pos = k + (dis[index]%n);
        if(pos>n){
            pos = pos - n;
        }
        find_player(n,m,pos,dis,dir,index+1,ans,dp);
    }
    else{

        //clockwise;
        int pos1 = k + (dis[index]%n);
        if(pos1>n){
            pos1 = pos1 - n;
        }
        find_player(n,m,pos1,dis,dir,index+1,ans,dp);

        //anticlockwise;
        int pos2 = n+k - (dis[index] % n);
        if(pos2>n){
            pos2 = pos2 - n;
        }
        find_player(n,m,pos2,dis,dir,index+1,ans,dp);

    }

    dp[k][index] = 1;

    return ;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int dis[m];
        char dir[m];

        for(int i=0; i<m; i++){
            cin>>dis[i];
            cin>>dir[i];
        }

        set<int>ans;
        vector<vector<int>>dp (n+1,vector<int>(m+1,0));

        find_player(n,m,k,dis,dir,0, ans,dp);

        cout<<ans.size()<<endl;

        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}