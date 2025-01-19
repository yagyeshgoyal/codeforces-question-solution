#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        // int arr[n];
        // for(int i=0; i<n; i++){
        //     cin>>arr[i];
        // }
        // int count =0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         for(int z=j+1; z<n; z++){
        //             if(arr[i]==arr[j] || arr[j]==arr[z] || arr[i]==arr[z]){
        //                 count++;
        //             }
        //         }
        //     }
        // }

        // cout<<count<<endl;

        map<long long int,long long int>mp;

        for(int i=0; i<n; i++){
            long long int a;
            cin>>a;

            mp[a]++;
        }


        long long int ans = 0;
        long long int count = 0;
        for(auto i : mp){
            if(i.second>2){
                ans = ans + (1ll*i.second*(i.second-1)*(i.second-2))/6;
            }

            if(i.second>=2){
                ans = ans + 1ll*(1ll*(i.second*(i.second-1)/2)*count);
            }


            count  = count + i.second;
        }

        cout<<ans<<endl;
    }


    return 0;
}