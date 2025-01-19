#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];

            arr[i] = arr[i]%k;

        }


        vector<pair<int,int>>v;

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                cout<<i+1<<" ";
            }
            else{
                
                v.push_back({arr[i],i+1});
            }

        }

        v.push_back({0,0});
        sort(v.begin(),v.end());

        int s = v.size()-1;

        for(int i=v.size()-1; i>=1; i--){
            if(v[i].first == v[i-1].first){

            }
            else{
                for(int j=i; j<=s; j++){
                    cout<<v[j].second<<" ";
                }
                s = i-1;
            }
        }

        for(int j=1; j<=s; j++){
                    cout<<v[j].second<<" ";
                }
 
        cout<<endl;
    }


    return 0;
}