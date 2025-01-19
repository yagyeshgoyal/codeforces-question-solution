#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int arr[n];
        long long int temp[n];
        

        for(int i=0; i<n; i++){
            cin>>arr[i];
            temp[i] = arr[i];
            // sum = sum + arr[i];
        }
        unordered_map<int,int>mp;
        sort(temp, temp+n);

        int k = 0;
        long long int sum = temp[0];
        for(int i=1; i<n; i++){
            if(sum >= temp[i]){
                sum = sum + temp[i];
            }
            else{
                for(int j = k; j<i; j++){
                    mp[temp[j]] = i-1;
                }

                sum = sum + temp[i];
                k = i;
            }
        }

        for(int i = k; i<n; i++){
            mp[temp[i]] = n-1;
        }
        // cout<<sum<<endl;

        // for(int i=n-1; i>=0; i--){
        //     if(mp.count(temp[i])){
        //         sum = sum - temp[i];
        //     }
        //     else if(i == n-1){
        //         mp[temp[i]] = i;
        //         // cout<<sum<<" "<<i<<" "<<temp[i]<<endl;
        //         sum = sum-temp[i];
        //     }
        //     else{
        //         int count = i;
        //         long long int temp_sum = sum;
        //         for(int j=i+1; j<n;j++){
        //             if(temp[j] <= temp_sum){
        //                 count++;
        //                 temp_sum+=temp[j];
        //             }
        //             else{
        //                 break;
        //             }
        //         }
        //         mp[temp[i]] = count ;
        //         // cout<<sum<<" "<<count<<" "<<temp[i]<<endl;
        //         sum = sum - temp[i];
        //     }
        // }

        for(int i=0; i<n; i++){
            cout<<mp[arr[i]]<<" ";
        }
        cout<<endl;
    }


    return 0;
}