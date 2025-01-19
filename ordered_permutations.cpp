#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findstring(vector<long long int>&ans, long long int  k , int n){
    if(k==1){
        return ;
    }
    long long int bits = log2l(k);
    if(powl(2,bits) != k){
        bits++;
    }
    
    long long int maxbits = powl(2,bits);

    long long int noToReverse = bits+1;

    findstring(ans,maxbits -  k + 1, n);

    reverse(ans.rbegin() , ans.rbegin() + (bits + 1));

    return ;

    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        vector<long long int>ans;

        for(int i=1; i<=n; i++){
            ans.push_back(i);
        }


        long long int bits = log2l(k);
        if(powl(2,bits) != k){
            bits++;
        }

        long long int p = bits;

        if(p>=n){
            cout<<-1<<endl;
        }
        else{
            findstring(ans,k,n);

            for(auto i : ans){
                cout<<i<< " ";
            }
            cout<<endl;
        }


        


    }


    return 0;
}