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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int lcm = 1;

        for(int i=0; i<n; i++){
            lcm = (1ll*arr[i]*lcm)/(__gcd(arr[i],lcm));
        }

        vector<int>ans;
        long long int sum = 0;
        for(int i=0; i<n; i++){
            int k = lcm/arr[i];
            ans.push_back(k);
            sum += k;
        }

        if(sum>=lcm){
            cout<<-1<<endl;
        }
        else{
            for(int i=0; i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}