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
        int n,m;
        cin>>n>>m;

        vector<int>arr(m);
        for(int i=0; i<m; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());

        // if(m%2 == 1){
        //     arr.push_back(arr[(m)/2]);
        // }

        vector<vector<int>>ans(n,vector<int>(6,-1));

        int i = 0, j = m-1;

        for(int k=0; k<n; k += 2){
            if(i<=j){
                ans[k][0] = arr[i];
                ans[k][1] = arr[j];
                ans[k][2] = arr[i];
                ans[k][3] = arr[j];
                ans[k][4] = arr[i];
                ans[k][5] = arr[j];
                
            }
            if(k+1<n){
                ans[k+1][0] = arr[j];
                ans[k+1][1] = arr[i];
                ans[k+1][2] = arr[j];
                ans[k+1][3] = arr[i];
                ans[k+1][4] = arr[j];
                ans[k+1][5] = arr[i];
            }
            i++;
            j--;
            // if(arr.size() == m){
            //     j  = j % m;
            // }
            // else{
            //      j = j % (m+1);
            // }
        }

        for(int k=0; k<n; k++){
            for(int l=0; l<6; l++){
                cout<<ans[k][l]<<" ";
            }
            cout<<endl;
        }


    }

    return 0;
}