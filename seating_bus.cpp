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
        for(int i=0 ; i<n; i++){
            cin>>arr[i];
        }

        vector<int>v;
        v.push_back(arr[0]-1);
        v.push_back(arr[0]+1);

        bool flage = true;
        for(int i=1; i<n; i++){
            if(arr[i] == v[0]){
                v[0]--;
            }
            else if(arr[i] == v[1]){
                v[1]++;
            }
            else{
                flage= false;
                break;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}