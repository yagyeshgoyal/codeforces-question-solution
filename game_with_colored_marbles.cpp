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
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int count1 = 0;
        int count2 = 0;

        for(auto i : mp){
            if(i.second == 1){
                count1++;
            }
            else{
                count2++;
            }
        }

        int ans = ((count1+1)/2)*2;

        // if(count1%2 == 0){
        //     ans = ans + (count2+1)/2;
        // }
        // else{
        //     ans = ans + (count2)/2;
        // }

        cout<<ans+count2<<endl;
    }


    return 0;
}