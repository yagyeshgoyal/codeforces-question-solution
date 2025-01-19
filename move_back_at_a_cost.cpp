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
        map<int,int>mp;
        set<int>st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            st.insert(arr[i]);
        }

        vector<int>ans;
        vector<int>temp;

        int ind = 0;

        for(auto i : st){

            int j=0;
            while(j<mp[i] && ind<n){
                if(arr[ind] == i){
                    ans.push_back(i);
                    j++;
                }
                else{
                    temp.push_back(arr[ind]);
                }

                ind++;
            }

            if(ind == n){
                break;
            }
        }

        sort(temp.begin(), temp.end());

        int sk = -1;
        if(temp.size()>0)
         sk = temp[0];


        int count = 0;

        for(int i=n-1; i>=0; i--){
            if(arr[i] == sk+1){
                count++;
            }
            else if(arr[i]<=sk){
                break;
            }
        }

        // int lastnum = arr[n-1];
        for(auto i : temp){
            if(sk+1 == i && count>0){
                ans.push_back(i);
                count--;
            }
            else{
                ans.push_back(i+1);
            }
            
        }

        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}