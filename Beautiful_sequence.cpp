#include<iostream>
#include<vector>
using namespace std;

int solve1(int n, int arr[], vector<int> &v, int index,vector<vector<int>> & dp){
    if(index == n){
        for(int i=0; i<v.size(); i++){
            if(v[i] == i+1){
                return 1;
            }
        }

        return 0;
    }

    if(dp[index][v.size()] != -1){
        return dp[index][v.size()];
    }

    int ans1 = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == i+1){
            // cout<<"k"<<endl;
            // return true;
            ans1 = 1;
        }
    }

    // exlusive
    int ans2 = solve1(n, arr, v, index+1, dp);

    //inclusive
    v.push_back(arr[index]);
    int ans3 =solve1(n, arr, v, index+1, dp);
    
    
    v.pop_back();



    // return (ans1 or ans2 or ans3);
    if(ans1 == 1 ||  ans2 == 1 || ans3 == 1){
        dp[index][v.size()] = 1;
    }
    else{
        dp[index][v.size()] = 0;
    }
    return dp[index][v.size()];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        vector<int>v;
        // v.push_back(arr[0]);

        vector<vector<int>> dp (n+1, vector<int>(n+1, -1));

        int ans = solve1(n, arr, v, 0,dp);

        

        if(ans == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }


    return 0;
}