#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        set<int>arr;
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.insert(a);
            maxi= max(maxi,a);
        }

        // sort(arr.begin(), arr.end());
        vector<int>result;
        while(m--){
            char ch;
            cin>>ch;

            int l, r;
            cin>>l>>r;


            if(ch == '+'){
                if(maxi>=l && maxi<=r){
                    maxi++;
                }
            }
            else{
                if(maxi>=l && maxi<=r){
                    maxi--;
                }
            }

            result.push_back(maxi);
             
        }
        
        for(auto i : result){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}