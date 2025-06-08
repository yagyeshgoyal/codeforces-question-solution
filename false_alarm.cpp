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
        int n,x;
        cin>>n>>x;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int i = 0;
        int j = n-1;


        while(arr[i] != 1){
            i++;
        }

        while(arr[j] != 1){
            j--;
        }

        if( i > j){
            cout<<"YES"<<endl;
        }
        else if( (j-i+1) <= x ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}