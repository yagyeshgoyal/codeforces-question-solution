#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int temp_arr[n+1] =  {0};
        int maxy = -1;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];

            temp_arr[arr[i]]++;

            maxy = max(maxy,temp_arr[arr[i]]);
        }

        vector<int>v;
        int ans = INT_MAX;
        for(int i=1; i<=n; i++){
            if(temp_arr[i] == maxy){
                v.push_back(i);
            }
        }
        v.push_back(arr[0]);
        v.push_back(arr[n-1]);

        if(maxy == 1){
            cout<<n-1<<endl;
        }
        else{
            for(auto i : v){
                int s = 0;
                int e = 0;

                for(int j=0; j<n; j++){
                    if(arr[j] != i && s == 0){
                        s = j+1;
                    }
                    if(arr[j] != i){
                        e=j+1;
                    }
                }

                if(s != 0)
                ans = min(ans,e-s+1);
                else {
                    ans = min(ans,0);
                }

            }

            cout<<ans<<endl;
        }

        // int s = 0;
        // int e = 0;

        // for(int j=0; j<n; j++){
        //     if(arr[j] != arr[n-1]){
        //         s = j+1;
        //         break;
        //     }
        // }

        // for(int j=0; j<n; j++){
        //     if(arr[j] != arr[n-1]){
        //         e=j+1;
        //     }
        // }
        // if(s != 0)
        // ans = min(ans,e-s+1);
        // else {
        //     ans = min(ans,0);
        // }


        // for(int j=0; j<n; j++){
        //     if(arr[j] != arr[0]){
        //         s = j+1;
        //         break;
        //     }
        // }

        // for(int j=0; j<n; j++){
        //     if(arr[j] != arr[0]){
        //         e=j+1;
        //     }
        // }
        // if(s != 0)
        // ans = min(ans,e-s+1);
        // else {
        //     ans = min(ans,0);
        // }

    }


    return 0;
}