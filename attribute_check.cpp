#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin>>n>>m;

    // int arr[n];
    vector<int>arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    vector<int>ans(m+1,0);

    int count = m;
    for(int i=n-1; i>=0; i--){
        if(arr[i] == 0){
            count--;
        }
        else if(arr[i]<0){
            // vector<int>temp = ans;
            int k = abs(arr[i]);
            for(int j=0; j<=count-k; j++){
                ans[j] = ans[j]+1;
            }
            // ans = temp;
        }
        else{
            // vector<int>temp = ans;
            for(int j=arr[i]; j<=count; j++){
                ans[j] = ans[j]+1;
            }
            // ans = temp;
        }
    }

    auto finalans = max_element(ans.begin(), ans.end());
    cout<<*finalans<<endl;


    return 0;
}