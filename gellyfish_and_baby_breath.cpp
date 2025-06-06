#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int mod = 998244353;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr1(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        vector<int>arr2(n);
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        
        vector<int>arr3(n);
        arr3[0] = 1;
        for(int i=1; i<n; i++){
            arr3[i] = (arr3[i-1] * 2) % mod;
        }

        for(int i = 0, j = 0, k = 0 ; k < n ; k ++){
            if(arr1[k] > arr1[i]) i = k; if(arr2[k] > arr2[j]) j = k;
            if(arr1[i] != arr2[j]){
                if(arr1[i] > arr2[j]) cout<<(arr3[arr1[i]] + arr3[arr2[k - i]]) % mod<<" ";
                else cout<<(arr3[arr2[j]] + arr3[arr1[k - j]]) % mod<<" ";    
                
            }
            else cout<<(arr3[arr1[i]] + arr3[max(arr2[k - i], arr1[k - j])]) % mod<<" ";
        }

        cout<<endl;


    }

    return 0;
}