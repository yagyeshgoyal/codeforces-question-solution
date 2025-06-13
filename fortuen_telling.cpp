#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,x,y;
        cin>>n>>x>>y;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];

        }

        long long int sum = x + y;
        for(auto i : arr){
            sum = sum + i;
        }

        if(sum&1){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }


    }

    return 0;
}