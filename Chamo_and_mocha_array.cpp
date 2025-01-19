#include<iostream>
#include<vector>
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

        if(n==2){
            cout<<min(arr[0],arr[1])<<endl;
        }
        else{
            int maxi = min(arr[0],arr[1]);
            for(int i=0; i<n-2; i++){
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                temp.push_back(arr[i+2]);

                sort(temp.begin(),temp.end());

                maxi = max(maxi,temp[1]);
            }

            cout<<maxi<<endl;
        }
    }


    return 0;
}