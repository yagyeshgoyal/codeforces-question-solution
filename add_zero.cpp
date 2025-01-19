#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

long long int findans(unordered_map<long long int,vector<int>>&mpk, int n, long long int size,unordered_map<long long int,long long int>&mps){
    if(!mpk.count(size)){
        return size;
    }
    if(mps.count(size)){
        return mps[size];
    }
    long long int ans = size;

    for(auto i : mpk[size]){
        ans = max(ans,findans(mpk,n,size+i,mps));
    }
    

    return mps[size] = ans;
}

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

        for(int i=0; i<n; i++){
            long long int a;
            cin>>a;
            arr.push_back(a);

            if(i != 0){
                mpk[a+i].push_back(i);
            }
        }
        unordered_map<long long int,long long int>mps;
        long long int ans  = findans(mpk,n,n,mps);

        cout<<ans<<endl;
    }


    return 0;
}