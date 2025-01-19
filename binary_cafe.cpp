// #include<iostream>
// #include<set>
// #include<vector>
// #include<map>
// #include<unordered_map>
// #include<bits/stdc++.h>
// using namespace std;

// // void solve(int sum, int index,  int n,vector<int>&v, set<vector<int>> &ans, vector<int>&curr){
// //     if(index >= v.size()){
// //         if(sum <= n){
// //             ans.insert(curr);
// //         }
// //         return ;
// //     }

// //     if(sum <= n){
// //         ans.insert(curr);
// //     }

// //     // take;
// //     sum = sum + pow(2,v[index]);
// //     if(sum <= n){
// //         curr.push_back(index+1);
// //         solve(sum,index+1,n,v,ans,curr);
// //         curr.pop_back();
// //     }

// //     // not take ;
// //     sum = sum - pow(2,v[index]);

// //     solve(sum,index+1, n, v, ans, curr);

// //     return ;
// // }



// // void solve(int sum, int index,  int n,vector<int>&v, int &count, vector<vector<int>>&dp){
// //     if(index >= v.size()){
// //         if(sum <= n){
// //             // ans.insert(curr);
// //             count++;
// //         }
// //         return ;
// //     }


// //     if(dp[sum][index] != -1){
// //         return ;
// //     }

// //     // if(sum <= n){
// //     //     ans.insert(curr);
// //     // }

// //     // take;
// //     sum = sum + pow(2,v[index]);
// //     if(sum <= n){
// //         // curr.push_back(index+1);
// //         solve(sum,index+1,n,v,count,dp);
// //         // curr.pop_back();
// //     }

// //     // not take ;
// //     sum = sum - pow(2,v[index]);

// //     solve(sum,index+1, n, v, count, dp);

// //     dp[sum][index] = 0;

// //     return ;
// // }



// void solve(int sum, int index,  int n,vector<int>&v, int &ans, unordered_map<int,pair<int,int>>&mp){
//     if(index >= v.size()){
//         if(sum <= n){
//             // ans.insert(curr);
//             ans++;
//         }
//         return ;
//     }

//     // pair<int,int>p = make_pair(sum,index);
//     if(mp.count(sum) == 1){
//         if(mp[sum].first == index){
//             return ;
//         }
//     }

//     // if(sum <= n){
//     //     ans.insert(curr);
//     // }

//     // take;
//     sum = sum + pow(2,v[index]);
//     if(sum <= n){
//         // curr.push_back(index+1);
//         solve(sum,index+1,n,v,ans,mp);
//         // curr.pop_back();
//     }

//     // not take ;
//     sum = sum - pow(2,v[index]);

//     solve(sum,index+1, n, v, ans, mp);

//     // dp[sum][index] = 0;
//     mp[sum].first = index;
//     mp[sum].second= 1;

//     return ;
// }

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         long int n,k;
//         cin>>n>>k;

//         long int mul = 0;
//         vector<int>v;
//         for(int i=0; i< min<int>(31,k); i++){
            
//             if(pow(2,i)<= n){
//                 v.push_back(i);
//             }
//             else{
//                 break;
//             }
//         }

        
//         // set<vector<int>>ans;
//         // vector<int>curr;
//         // solve(0,0,n,v,ans,curr);

//         int count = 0;
//         // vector<vector<int>>dp (pow(2,v[v.size()-1])+2, vector<int>(v.size(),-1));
//         unordered_map<int,pair<int,int>>mp;
//         solve(0,0,n,v,count,mp);

//         // cout<<ans.size()<<endl;
//         cout<<count<<endl;
//     }


//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        cout<<min<long int>(pow<long int>(2,min<long int>(30,k)),n+1)<<endl;
    }

    return 0;
}