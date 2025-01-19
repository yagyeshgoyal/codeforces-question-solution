#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        vector<int>arr;

        for(int i=0; i<m; i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }

        sort(arr.begin(), arr.end());

        while(q--){
            int a;
            cin>>a;

            auto p = lower_bound(arr.begin(), arr.end(), a);

            int davidPosition;
            if(p != arr.end())
             davidPosition = p - arr.begin();
            else{
                davidPosition = arr.size()-1;
            }
            // cout<<davidPosition<<endl;

            if(arr[davidPosition] == a){
                cout<<0<<endl;
            }
            else if(davidPosition == 0 && arr[davidPosition] > a){
                cout<<arr[davidPosition]-1<<endl;
            }
            // else if(davidPosition == 0)
            else if(davidPosition == m-1 && arr[davidPosition] <= a){
                cout<<n -arr[davidPosition]<<endl;
            }
            else{
                int ans = arr[davidPosition] - arr[davidPosition-1] - 1;

                cout<<(ans+1)/2<<endl;

            }
        }
    }


    return 0;
}