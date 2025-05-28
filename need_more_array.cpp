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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int a = arr[0];
        int count = 1;

        for(int i=1; i<n; i++){
            if(a + 1 < arr[i]){
                count++;
                a = arr[i];
            }
        }

        cout<<count<<endl;


    }

    return 0;
}