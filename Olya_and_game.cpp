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
        
        
        vector<pair<int,int>>arr;
        int k = 0;
        for(int i=0;i<n;i++){
            int o;
            cin>>o;
            int arrm[o];
            for(int j=0;j<o;j++)
            cin>>arrm[j];
            sort(arrm,arrm+o);
            arr.push_back({arrm[0],k});
            arr.push_back({arrm[1],k});
            k++;
        }

        vector<bool>visited(n,false);

        long long int ans = 0;

        sort(arr.begin(), arr.end());
        k=n;
        for(int i=2*n-1; i>=0; i--){
            if(k==1){
                break;
            }

            if(visited[arr[i].second] == false){
                visited[arr[i].second] = true;
                ans  = ans + arr[i].first;
                k--;
            }

        }

        ans = ans + arr[0].first;

        cout<<ans<<endl;

        
    }


    return 0;
}