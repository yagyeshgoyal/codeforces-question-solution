#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

long long int findans(int i, int j, vector<vector<int>>&arr, vector<vector<long long int>>&dp){
    if(j == arr[0].size()){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    long long int ans1 = findans(i,j+1,arr,dp);
    long long int ans2 = findans(!i , j+1, arr, dp) + arr[i][j];

    return dp[i][j] = max(ans1,ans2);
}



int main()
{
    int n;
    cin>>n;

    vector<vector<int>>arr;
    for(int i = 0; i<2; i++){
        vector<int>temp;
        for(int i = 0; i<n; i++){
            int a ;
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }

    vector<vector<long long int>>dp(2,vector<long long int>(n+1,-1));

    long long int ans1 = findans(0,0,arr,dp);
    long long int ans2 = findans(1,0,arr,dp);

    cout<<max(ans1,ans2)<<endl;
    

    return 0;
}