#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;


 
// long long int findans(unordered_map<long long int,vector<int>>&mpk,long long int &n, long long int size,unordered_map<long long int,long long int>&mps){

//     if( size >= n || !mpk.count(size)){
//         // cout<<size<<endl;
//         return 0;
//     }
//     if(mps.count(size)){
//         return mps[size];
//     }
//     long long int ans = 0;
 
//     for(auto i : mpk[size]){
//         ans = max(ans,findans(mpk,n,size+i,mps)+i);
//     }
    
 
//     return mps[size] = ans;
// }
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        // int arr[n];
        vector<long long int>arr;
        unordered_map<long long int,vector<int>>mpk;
        long long int num = (1ll*n*(n+1))/2;

        long long int mini = INT32_MAX;
        set<long long int>st;
 
        for(int i=0; i<n; i++){
            long long int a;
            cin>>a;
            arr.push_back(a);
 
            if(i != 0 && a+i < num){
                mpk[a+i].push_back(i);
                st.insert(a+i);
            }

            // mini = min(num, max(mini, a+i));

        }
        // unordered_map<long long int,long long int>mps;
        // long long int ans  = findans(mpk,num,n,mps) + n;

        vector<long long int>dp(num+n, 0);

        long long int ans = 0;

        // for(int i=mini; i>=n; i--){
        for(auto i = st.rbegin(); i!= st.rend(); i++){
            long long int temp = 0;
            for(auto j : mpk[*i]){
                temp = max<long long int>(temp, j + dp[*i + j]);
            }
            dp[*i] = temp;
            // ans = max(ans,temp);
        }
        ans = dp[n];
        cout<<ans+n<<endl;
    }
 
 
    return 0;
}