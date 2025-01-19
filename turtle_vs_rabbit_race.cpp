#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int arr[n+1];
        arr[0] = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];

            arr[i] = arr[i]+arr[i-1];
        }

        vector<long long int>v;

        int q;
        cin>>q;
        map<long long int, long long int>mp;
        while(q--){
            long long int l,u;
            cin>>l>>u;
            long long int maxy = 0;
            int ans = l;
            

            for(int i=l; i<=n; i++){

                long long int curr_sum = arr[i] - arr[l-1];
                long long int sum;

                if(mp.count(curr_sum)){
                    // cout<<"k"<<endl;
                    sum = mp[curr_sum];
                }
                if(curr_sum == u || curr_sum == u+1){
                    sum = (u*(u+1)*1ll)/2;
                }
                else if(curr_sum<u){
                    sum = (u*(u+1)*1ll)/2 - ((u-curr_sum)*(u-curr_sum+1)*1ll)/2;
                }
                else{
                    sum = (u*(u+1)*1ll)/2 - ((curr_sum-u-1)*(curr_sum-u)*1ll)/2;
                }

                mp[curr_sum] = sum;
                
                if(sum>maxy){
                    ans = i;
                    maxy = sum;
                }
            }

            // cout<<ans<<" ";
            v.push_back(ans);
            
        }
        for(auto  i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}