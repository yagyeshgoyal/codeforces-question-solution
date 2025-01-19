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
        
       long long int k = n^m;

        long long int count = 0;
       while(k!=0){
        if(k%2 == 0){
            count++;
        }
        else{
            break;
        }
        k = k/2;
       }
    //    cout<<count<<endl;
        long long int ans= pow(2,count);
       cout<<ans<<endl;
    }


    return 0;
}