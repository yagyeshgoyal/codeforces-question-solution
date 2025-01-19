#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include<numeric>

using namespace std;

int  findlcm(int arr[], int currlcm,map<int,bool>&mp, int index, int n, int currlength, 
 vector<vector<long int>>&dp){
   
    if(index==n){ 
        if(mp[currlcm]){
 
            return 0;
        }
        else{
            // ans = max(ans,currlength);
            return 1;
        }
    }

    if(dp[index][currlcm] != -1){
        return dp[index][currlcm];
    }

    int ans1 = findlcm(arr, (1ll*currlcm*arr[index])/__gcd(currlcm,arr[index]),mp,index+1,n,currlength+1, dp);
    if(ans1 != 0){ans1++;}
    int ans2 =  findlcm(arr, currlcm, mp,index+1, n, currlength,dp);


    dp[index][currlcm] = max(ans1,ans2);

    return dp[index][currlcm];

}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];
        map<int,bool>mp;


       for(int i=0; i<n; i++){ 
            cin>>arr[i];  
            mp[arr[i]] = true;
        }
        vector<vector<long int>>dp(n+1,vector<long int>(INT_MAX,-1));
	    int ans = 0;
        for(int i=0; i<n; i++){
            int temp = findlcm(arr,arr[i],mp,i+1,n,1,dp);
            ans = max(ans,temp);
        }

       cout<<ans<<endl;


    }

return 0;
}