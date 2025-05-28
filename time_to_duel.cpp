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

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int zero = 0;
        bool flage = true;
        for(int i=0; i+1<n; i++){
            
            if(a[i] == 0 && a[i+1] == 0){
                flage = false;
                break;
            }
            else if((a[i] == 0 && a[i+1] == 1) || (a[i] == 1 && a[i+1] == 0)){
                zero++;
            }
        }

        if(zero == 0){
            flage = false;
        }

        if(flage){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}