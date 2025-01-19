#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>ans;
        int k = 1;
        for(int i=0; i<n; i = i+1){
            ans.push_back(k);
            
            k++;
        }

        ans[n-1] = 1;
        ans[1]  = 1;

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}