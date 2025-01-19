#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        int arr[n];
        long int maxi = 0;
        unordered_map<int,int>mp;
        unordered_map<int,set<int>>count;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]] = i;
            count[arr[i]].insert(i);
            maxi = max<long int>(maxi, arr[i]);
        }
        long long int ans = 0;
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if((arr[i]+arr[j])%x == 0 && (arr[i]-arr[j])%y == 0){
        //             ans++;
        //         } 
        //     }
        // }
        for(int i=0; i<n-1; i++){
            int a = arr[i];
            int b = 0;
            for(int j=x; b<= maxi; j = j + x){
                b = j - a;
                // cout<<b<<endl;
                if(mp.count(b) && mp[b] > i && (a-b)%y == 0){
                    // cout<<b<<endl;
                    for(auto k : count[b]){
                        if(k>i){
                            ans++;
                        }
                    }
                }
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}