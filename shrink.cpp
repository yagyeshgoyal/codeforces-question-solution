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
        int n;
        cin>>n;


        vector<int>arr(n);

        int count = 1;

        for(int i = 0; i<(n+1)/2; i = i + 1){
            arr[i] = count;

            count++;
            
            if(i != n-i-1){
                arr[n-i-1] = count;
                count++;
            }
        }

        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;


    }

    return 0;
}