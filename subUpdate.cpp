#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        l--;
        r--;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr3;

        for(int i=0; i<l; i++){
            arr1.push_back(arr[i]);
        }

        for(int i=l; i<=r; i++){
            arr2.push_back(arr[i]);
        }
        for(int i=r+1; i<n; i++){
            arr3.push_back(arr[i]);
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        reverse(arr2.begin(), arr2.end());
        sort(arr3.begin(), arr3.end());

        int k = 0;
        int i=0;
        int j=0;

        while(i<arr2.size() && j<arr3.size()){
            if(arr2[i] >= arr3[j]){
                i++;
                j++;
            }
            else{
                break;
            }
        }

        long long int ans = 0;
        for(int r=0; r<i; r++){
            ans = ans + arr3[r];
        }

        for(int r = i ; r<arr2.size(); r++){
            ans = ans + arr2[r];
        }

         i=0;
        j=0;

        while(i<arr2.size() && j<arr1.size()){
            if(arr2[i] >= arr1[j]){
                i++;
                j++;
            }
            else{
                break;
            }
        }

        long long int ans2 = 0;

        for(int r=0; r<i; r++){
            ans2 = ans2 + arr1[r];
        }

        for(int r = i ; r<arr2.size(); r++){
            ans2 = ans2 + arr2[r];
        }

        cout<<min(ans,ans2)<<endl;



    }

    return 0;
}