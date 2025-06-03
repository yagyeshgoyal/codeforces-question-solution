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
        int n;
        cin>>n;

        vector<pair<int, int>> arr(n);

        set<int>xaxis;
        set<int>yaxis;
        map<int, int> x_map;
        map<int, int> y_map;

        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            arr[i] = {a, b};
            xaxis.insert(a);
            yaxis.insert(b);
            x_map[a]++;
            y_map[b]++;
        }

        long long int ans = 1ll* (*xaxis.rbegin() - *xaxis.begin()+1) * (*yaxis.rbegin() - *yaxis.begin() + 1);
        // cout<<ans<<endl;
        for(int i=0; i<n && arr.size()>1; i++){

            if(x_map[arr[i].first] == 1){
                xaxis.erase(arr[i].first);
            }
            if(y_map[arr[i].second] == 1){
                yaxis.erase(arr[i].second);
            }
            long long int temp = 1ll* (*xaxis.rbegin() - *xaxis.begin()+1) * (*yaxis.rbegin() - *yaxis.begin() + 1);
            long long int mini = min(1ll*(*xaxis.rbegin() - *xaxis.begin()+1),1ll*(*yaxis.rbegin() - *yaxis.begin() + 1));
            
            // cout<<temp<<" "<<mini<<" "<<xaxis.size()<<endl;
            
            if(temp != arr.size()-1)
            ans = min(ans,temp);
            else{
                ans = min(ans,temp+mini);
            }
            // cout<<ans<<endl;
        
            xaxis.insert(arr[i].first);
            yaxis.insert(arr[i].second);
        }

        cout<<ans<<endl;

    }

    return 0;
}