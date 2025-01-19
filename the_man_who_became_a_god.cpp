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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int diff[n-1];
        vector<int>v;
        long long int sum = 0;
        for(int i=1; i<n; i++){
            diff[i-1] = abs(arr[i] - arr[i-1]);
            v.push_back(diff[i-1]);
            sum = sum + diff[i-1];
        }

        sort(diff , diff+(n-1));
        sort(v.begin(), v.end());

        for(int i=1; i<k; i++){
            sum = sum - v.back();
            v.pop_back();
        }

        cout<<sum<<endl;
    }


    return 0;
}