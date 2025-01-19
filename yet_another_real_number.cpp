#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findbit(int num){
    int p = log2(num);

    while(p>0){
        int m = pow(2,p);
        if(num%m==0){
            return p;
        }
        p--;
    }

    return 0;
}

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

        int noOfpow = 0;
        int maxnum = 0;

        vector<int>ans;
        for(int i=0; i<n; i++){
            int k = 0;
            if(i==0){
                k = findbit(arr[i]);
                ans.push_back(arr[i]);
                noOfpow +=k;
                maxnum = max(maxnum,arr[i]);
            }
            else{
                
                if(arr[i]%2 == 0){

                }
                else{
                    maxnum = max(maxnum,arr[i]);
                    int p = max
                }
            }
        }


    }


    return 0;
}