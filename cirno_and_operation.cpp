#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

unordered_map<string, long long int> memo;

long long int findans(vector<long long int>arr, bool isrotated, int &count){

    


    if(arr.size() == 1){
        return arr[0];
    }

    if(arr.size() == 2){
        return max(arr[0]+arr[1] , max(arr[0]-arr[1], arr[1]-arr[0]));
    }

    string key = to_string(isrotated) + ":";
    for (long long int num : arr) key += to_string(num) + ",";
    
    if (memo.count(key)) return memo[key];

    vector<long long int>temp = arr;
    reverse(temp.begin(), temp.end());
    
    long long int ans1 = INT64_MIN;
    if(!isrotated){
        ans1 = findans(temp,true,count);
    }

    vector<long long int>temp2;
    long long int ans3 = arr[0];
    for(int i=1; i<arr.size(); i++){
        temp2.push_back(arr[i]-arr[i-1]);
        ans3 = ans3 + arr[i];
    }

    long long int ans2 = findans(temp2, false, count);


    return memo[key] = max(ans1,max(ans2,ans3));
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int>arr;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        

    
        int count  = 0;
        long long int ans = findans(arr, false, count);

       

        cout<<ans<<endl;
        // cout<<count<<endl;

    }

    return 0;
}