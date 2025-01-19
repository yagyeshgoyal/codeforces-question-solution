#include<iostream>
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

        vector<bool>v(n,false);

        for(int i=0; i<n; i++){
            if(v[i]){
                continue;
            }

            for(int j=0; j<n; j++){
                if(i != j && abs(arr[i]-arr[j])%k == 0){
                    v[i] = true;
                    v[j] = true;
                    break;
                }
            }
        }

        int ans = -1;

        for(int i=0; i<n; i++){
            if(v[i] == false){
                ans = i+1;
                break;
            }
        }

        if(ans != -1){
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }


    return 0;
}