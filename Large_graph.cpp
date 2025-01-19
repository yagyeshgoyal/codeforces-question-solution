#include<iostream>
#include<vector>
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
 
        vector<bool>visited(n,false);
        vector<vector<int>>count(n);

        for(int i=1; i<=n; i++){
            if(visited[i-1] == false){
                int pos = i;
                // visited[i-1] = true;
                // count[i-1]++;
                count[i-1].push_back(i);
                for(int j=i+1; j<=n; j++){
                    if(visited[j-1] == false && abs(j-pos) <= k && __gcd(arr[pos-1],arr[j-1]) >1){
                        visited[j-1] = true;
                        visited[i-1] = true;
                        // count[i-1]++;
                        // count[i-1].push_back(j-pos);
                        // count[i-1].push_back(n-j + i);
                        count[i-1].push_back(j);
                        pos = j;
                    }
                }
            }
        }

        // cout<<__gcd(3,9)<<endl;

        // for(int i=0; i<n; i++){
        //     cout<<count[i]<<" ";
        // }
        // cout<<endl;

        // int ans = 1;
        // for(int i=1; i<n; i++){
            
        //     if(count[i] == 0) continue;
        //     if(arr[i] == 1){
        //         ans++;
        //     }
        //     else if(count[i] > 1){
        //         if(n<=k)
        //         ans++;
        //         else{
        //             ans = ans + 2;
        //         }
        //     }
        //      else if(n<=k){
        //         ans++;
        //     }
        //     else{
        //         ans = ans + 2;
        //     }
        // }

        // int q = 0;
        // for(int i=0; i<n; i++){
        //     if(arr[i] == 1){
        //         // if(i==0 || n<=k){
        //         //     ans = ans + n-1;
        //         // }
        //         // else{
        //         //     ans = ans + n-2;
        //         // }
        //         ans = ans + n-1;
        //     }
        // }

        // cout<<ans<<endl;

        // ans = ans + max((q*n)-1,0);

        int ans = 0;

        for(int i=0; i<n; i++){
             if(arr[i] == 1){
                    ans = ans + n;
                    continue;
                }
            if(visited[i] == false){
                
                ans++;
                if(n>k && i!= 0){
                    ans++;
                }
                continue;
            }
           
            
            if(count[i].size()>0){
                // cout<<count[i].size()<<endl;
                ans++;
            }
            for(int j=1; j<count[i].size(); j= j+1){
                // if(count[i][j]<=k && count[i][j+1]<=k){
                //     continue;
                // }
                // else{
                //     ans = ans + 1;
                // }

                if((j!=count[i].size()-1 && count[i][j]-count[i][j-1]<=k && count[i][j+1]-count[i][j]<=k)){
                    continue;
                }
                else if(j == count[i].size()-1 && count[i][j]-count[i][j-1]<=k && n-count[i][j]+count[i][0] <=k){
                    continue;
                }
                else{
                    ans = ans + 1;
                }
            }

            // cout<<ans<<endl;
        }


        cout<<ans<<endl;
    }


    return 0;
}