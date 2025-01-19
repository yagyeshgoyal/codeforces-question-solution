#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int>v1;
        vector<long long int>v2;
        vector<long long int>v3;
        for(int i=0; i<n; i++){
            long long int a, b;
            cin>>a>>b;
            if(a==1){
                v1.push_back(b);
            }
            else if(a == 2){
                v2.push_back(b);
            }
            else{
                v3.push_back(b);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        long long int a = v1[v1.size()-1];
        long long int b = v2[0];

        long long int count = b-a+1;
        for(int i=0; i<v3.size(); i++){
            if(v3[i]>=a && v3[i]<=b){
                count--;
            }
        }

        if(count<=0){
            cout<<0<<endl;
        }
        else{
            cout<<count<<endl;
        }

    }


    return 0;
}