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
        long long int n,k,x;
        cin>>n>>k>>x;

        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int prefix[n+1];
        prefix[0] = 0;
        for(int i=0; i<n; i++){
            prefix[i+1] = arr[i] + prefix[i];
        }

        long long int total = 1ll*prefix[n]*k;
        long long int prevsum = 0;
        long long int ans = 0;

        while(k--){
            // bool flage = false;
            // for(int i=0; i<n; i++){
            //     if(total - prevsum >=x){
            //         ans++;
                    
            //     }
            //     else{
            //         flage = true;
            //         break;
            //     }
            //     prevsum += arr[i];
                
            // }
            // if(flage){
            //     break;
            // }
            prevsum = prevsum + prefix[n-1];
            // cout<<prevsum<<endl;
            if(total - prevsum >= x){
                ans = ans + n;
                prevsum = prevsum + arr[n-1];
            }
            else{
                
                k++;
                prevsum = prevsum- prefix[n-1];
                break;
            }
        }
        // cout<<prevsum<<endl;
        if(k>0){
            for(int i=0; i<n; i++){
                if(total - prevsum >=x){
                    ans++;
                    
                }
                else{
                    
                    break;
                }
                prevsum += arr[i];
                
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}