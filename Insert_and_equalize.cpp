#include<iostream>
#include<bits/stdc++.h>
#include<map>
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
            mp[arr[i]] = 1;
        }

        sort(arr,arr+n);

        if(n==1){
            cout<<1<<endl;
        }
        // else if(flage == true){
        //     int count = 0;
        //     for(int i=0; i<n; i++){
        //         count = count + (abs(arr[n-1]-arr[i]))/v[0];
        //     }
            
        //     int num = arr[n-1] - v[0];
        //     while(mp[num]){
        //         num = num - v[0];
        //     }

        //     count = count + (abs(arr[n-1]-num))/v[0];

        //     cout<<count<<endl;
        // }
        // else{
        //     int count = 0;

        //     for(int i=0; i<n; i++){
        //         count = count + (abs(arr[n-1]-arr[i]));
        //     }

        //     bool even = true;
        //     for(int i=0; i<v.size(); i++){
        //         if(v[i]%2 != 0){
        //             even = false;
        //             break;
        //         }
        //     }
            
        //     if(even == true){
        //         int num = arr[n-1] - 2;
        //         while(mp[num]){
        //             num = num - 2;
        //         }

        //         count = (count/2) + (abs(arr[n-1]-num))/2;

        //         cout<<count<<endl;
        //     }
        //     else{
        //         int num = arr[n-1] - 1;
        //         while(mp[num]){
        //             num = num - 1;
        //         }

        //         count = count + (abs(arr[n-1]-num));

        //         cout<<count<<endl;
        //     }
        // }
        else {

            vector<int>v;

            for(int i=1; i<n; i++){
                v.push_back(abs(arr[i]-arr[i-1]));
            }

            sort(v.begin(), v.end());

            

            int num = v[0];

            for(int i=1; i<v.size(); i++){
                // if(v[i]%v[0] != 0){
                //     flage = false;
                //     break;
                // }
                num = __gcd(num,v[i]);
            }


            long long int count = 0;
            for(int i=0; i<n; i++){
                count = count + (abs(arr[n-1]-arr[i]))/num;
            }
            // cout<<count<<endl;
            long long int val = arr[n-1] - num;
            while(mp[val]){
                val = val - num;
            }

            // cout<<val<<endl;

            count = count + (abs(arr[n-1]-val))/num;

            cout<<count<<endl;
        }

        // cout<<-1000000000 -1<<endl;
        
    }

    return 0;
}