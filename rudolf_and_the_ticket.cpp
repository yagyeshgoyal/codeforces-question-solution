#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int left_arr[n];
        for(int i=0; i<n; i++){
            cin>>left_arr[i];
        }

        int right_arr[m];
        for(int i=0; i<m; i++){
            cin>>right_arr[i];
        }


        sort(left_arr, left_arr+n);
        sort(right_arr, right_arr+m);

        int ans = 0;

        for(int i=0; i<n; i++){
            if(left_arr[i] < k){
                for(int j=0; j<m; j++){
                    if(left_arr[i]+right_arr[j] <= k){
                        ans++;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
        
    }

    return 0;
}