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
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        map<int,int>mp1;
        map<int,long long int>mp2;
        set<int>st;

        for(auto i : arr){
            int a = k - (i%k);
            if(a<k){
                mp1[a]++;
                mp2[a] = 0;
                st.insert(a);
            }
            
        }

        long long int x = 0;

        while(st.size()>0){
            // cout<<st.size()<<endl;
            vector<int>v;
            for(auto i : st){
                mp1[i]--;
                long long int p = mp2[i] + i;
                // cout<<p<<endl;
                if(x<=p){
                    x = p+1;
                }

                if(mp1[i] == 0){
                    v.push_back(i);
                }
                else{
                    mp2[i] = mp2[i] + k;
                }
            }

            for(auto i : v){
                st.erase(i);
            }
        }

        cout<<x<<endl;

        





    }

    return 0;
}